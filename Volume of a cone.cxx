   #include <stdio.h>
    #include<math.h>
    #define pi 22/7
float main()
{
 
    float radius, height;
    float volume;
 
    printf("Enter value of radius:\n ");
    scanf("%f", &radius);
    printf("Enter value of height:\n");
    scanf("%f",&height);
    volume = (1.0/3) * pi * radius* radius* height;
    printf("\n Volume of cone is : %.3f", volume);
    return 0;
}