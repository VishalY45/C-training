void update()
{
	FILE *fptr;
    int flag = 0;
     int uid;
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "r");
    printf("\nEnter id on which data you want to update:\n");
   
    scanf("%d", &uid);

    while (fscanf(fptr, "%s%d%f", &jew.item, &jew.id, &jew.weight) != EOF)
    {
        if (uid == jew.id)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag)
    {
       
        printf("\n1:name update:\n");
        printf("\n2:weight update:\n");
        _flushall();
        int choice;
        printf("\nEnter choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            _flushall();
            fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "r+");
            printf("\nEnter new name: \n");
            char ch[20];
            printf("\n%s",jew.item);
            gets(ch);
            strcpy(jew.item,ch);
            fprintf(fptr,"%s",jew.item);
            printf("\nUpdated");
            fclose(fptr);
            break;
        case 2:
           
            fptr = fopen("H:\\C-training\\May-C\\File Handling\\jewellerydata.txt", "r+");
            //  _flushall();
            float wei;
            printf("\nEnter new weight: \n");
            scanf("%f", &wei);
            jew.weight = wei;
            fprintf(fptr,"%s\t%d\t%f",jew.item,jew.id,jew.weight);
            printf("\nUpdated");
            fclose(fptr);
            break;
        default:
            printf("\nInvalid Input\n");
            break;
        }
    }
    else
    {
        printf("\nID not found\n");
    }

    fclose(fptr);
}