package com.example.intadd;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.app.AppCompatDelegate;

public class MainActivity extends AppCompatActivity {

    private EditText num1AddText, num2AddText, num1SubText, num2SubText;
    private Button addButton, subtractButton, darkmodeButton;
    private TextView addTextView,subtractTextView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Initialize UI components
        darkmodeButton = findViewById(R.id.darkmodeButton);
        num1AddText = findViewById(R.id.num1AddText);
        num2AddText = findViewById(R.id.num2AddText);
        num1SubText = findViewById(R.id.num1SubText);
        num2SubText = findViewById(R.id.num2SubText);
        addButton = findViewById(R.id.addButton);
        subtractButton = findViewById(R.id.subtractButton);
        addTextView = findViewById(R.id.addTextView);
        subtractTextView = findViewById(R.id.subtractTextView);

        // Set button click listener
        darkmodeButton.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
            int currentNightMode = AppCompatDelegate.getDefaultNightMode();
            if (currentNightMode == AppCompatDelegate.MODE_NIGHT_YES) {
                // Switch to light mode
                AppCompatDelegate.setDefaultNightMode(AppCompatDelegate.MODE_NIGHT_NO);
            } else {
                // Switch to dark mode
                AppCompatDelegate.setDefaultNightMode(AppCompatDelegate.MODE_NIGHT_YES);
            }
            recreate(); // Recreate the activity to apply the new theme
        }});
        addButton.setOnClickListener(v -> {
                    // Get input numbers
                    int num1 = Integer.parseInt(num1AddText.getText().toString());
                    int num2 = Integer.parseInt(num2AddText.getText().toString());

                    // Compute sum
                    int sum = num1 + num2;

                    // Display result
                    addTextView.setText("Result: " + sum);
                });
                // Set button click listener
                subtractButton.setOnClickListener(v -> {
                    // Get input numbers
                    int num1 = Integer.parseInt(num1SubText.getText().toString());
                    int num2 = Integer.parseInt(num2SubText.getText().toString());

                    // Compute sum
                    int difference = num1 - num2;

                    // Display result
                    subtractTextView.setText("Result: " + difference);
                });
    }
}