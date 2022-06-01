#include<stdio.h>

struct application
{
    int release_date;
    float app_version;
    char app_name[20];

}a1;

struct mobile
{
    float mob_version;
    char mob_name[50];
    struct application a1;
};

struct mobile read(struct mobile);

void display(struct mobile);

main()
{
    struct mobile mob_data;
    mob_data=read(mob_data);
    display(mob_data);
}

struct mobile read(struct mobile mob_data)
{
        printf("Enter mobile version ,name and app version, name\n");
        scanf("%f%s%f%s",&mob_data.mob_version, mob_data.mob_name,&mob_data.app_version,mob_data.app_name);
        return mob_data;
}

//void display(struct mobile mob_data)
//{
    //printf("Mobile version is %f\nMobile name is %s\nApp version is %f\nApp name is %s",mob_data.mob_version, mob_data.mob_name,mob_data.app_version,mob_data.app_name);
//}
