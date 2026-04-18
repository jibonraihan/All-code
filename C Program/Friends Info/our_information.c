#include <stdio.h>
#include <string.h>
struct dit
{
    long long int id;
    char mobile[20];
    char name[40];
    char address[100];
    char blood[15];
    char fb_link[1000];
    char handle[25];
    char email[100];

};
int main()
{
    struct dit s[1000]={0};

    s[1].id = 1;
    strcpy(s[1].mobile, "01408864416");
    strcpy(s[1].name, "Druvo Ghosh");
    strcpy(s[1].address, "Shantinagar, Dhaka");
    strcpy(s[1].blood, "A+");
    strcpy(s[1].fb_link, "https://www.facebook.com/share/15qJbpAokJ/");
    strcpy(s[1].email, "druboghosh18@gmail.com");
    strcpy(s[1].handle, "Not available");

    s[2].id = 2;
    strcpy(s[2].mobile, "01862221867");
    strcpy(s[2].name, "Foysal Ahmed Dinar");
    strcpy(s[2].address, "Soyedpur, Bagmara, Rajshahi");
    strcpy(s[2].blood, "AB-");
    strcpy(s[2].fb_link, "https://www.facebook.com/share/1744ZBqbvq/");
    strcpy(s[2].email, "mddinar31@gmail.com");
    strcpy(s[2].handle, "Not available");

    s[4].id = 4;
    strcpy(s[4].mobile, "01791323859");
    strcpy(s[4].name, "Jahanara Akter Rima");
    strcpy(s[4].address, "Chattogram");
    strcpy(s[4].blood, "Not available");
    strcpy(s[4].fb_link, "Not available");
    strcpy(s[4].email, "Not available");
    strcpy(s[4].handle, "Not available");

    s[5].id = 5;
    strcpy(s[5].mobile, "01308263073");
    strcpy(s[5].name, " K. M. Asif Karim");
    strcpy(s[5].address, "Faridpur");
    strcpy(s[5].blood, "Not vailable");
    strcpy(s[5].fb_link, "Not available");
    strcpy(s[5].email, "Not available");
    strcpy(s[5].handle, "Not available");

    s[6].id = 6;
    strcpy(s[6].mobile, "01613545459");
    strcpy(s[6].name, "Knanon Ansary");
    strcpy(s[6].address, "Jalalia, Delduar, Tangail");
    strcpy(s[6].blood, "B+");
    strcpy(s[6].fb_link, "https://www.facebook.com/share/196bf57rg5/");
    strcpy(s[6].email, "kanonansary@gmail.com");
    strcpy(s[6].handle, "md_kanon");

    s[8].id = 8;
    strcpy(s[8].mobile, "01843118076");
    strcpy(s[8].name, "Jibon Raihan");
    strcpy(s[8].address, "Balarampur, Kushtia Sadar, Kushtia");
    strcpy(s[8].blood, "B+");
    strcpy(s[8].fb_link, "https://www.facebook.com/share/1GdozXFV2L/");
    strcpy(s[8].email, "mdraihanjourdar@gmail.com");
    strcpy(s[8].handle, "jibon_raihan");

    s[9].id = 9;
    strcpy(s[9].mobile, "01613121104");
    strcpy(s[9].name, "Md. Abdullah");
    strcpy(s[9].address, "Ramnarayanpur, Chatkhil, Noakhali");
    strcpy(s[9].blood, "A+");
    strcpy(s[9].fb_link, "https://www.facebook.com/muhammad.abdullah.909117");
    strcpy(s[9].email, "abdullah4690521@gmail.com");
    strcpy(s[9].handle, "Abdullah_xD");

    s[10].id = 10;
    strcpy(s[10].mobile, "01636777920");
    strcpy(s[10].name, "Abid Alam");
    strcpy(s[10].address, "Dubail, Gupalpur, Tangail");
    strcpy(s[10].blood, "A+");
    strcpy(s[10].fb_link, "https://www.facebook.com/rashik.sadmanabid");
    strcpy(s[10].email, "rashiksadmanabid@gmail.com");
    strcpy(s[10].handle, "abid1241");

    s[11].id = 11;
    strcpy(s[11].mobile, "01752957784");
    strcpy(s[11].name, "Md. Faysal Miah");
    strcpy(s[11].address, "Biswash Betka, Tangail Sadar, Tangail");
    strcpy(s[11].blood, "B+");
    strcpy(s[11].fb_link, "https://www.facebook.com/abdulla.faysal11");
    strcpy(s[11].email, "abdullafaysal21@gmail.com");
    strcpy(s[11].handle, "abdullafaysal21");

    s[13].id = 13;
    strcpy(s[13].mobile, "01521719234");
    strcpy(s[13].name, "Md. Hafijur Rahman");
    strcpy(s[13].address, "Balarhat, Mithapukur, Rangpur");
    strcpy(s[13].blood, "B+");
    strcpy(s[13].fb_link, "https://www.facebook.com/hafijur.rahman2005/");
    strcpy(s[13].email, "m.mdhafijur2005@gmail.com");
    strcpy(s[13].handle, "Md_Hafijur");

    s[14].id = 14;
    strcpy(s[14].mobile, "01777264362");
    strcpy(s[14].name, "Md. Hasibul Hasan");
    strcpy(s[14].address, "Shibganj, Gafargaon, Mymensign");
    strcpy(s[14].blood, "O+");
    strcpy(s[14].fb_link, "https://www.facebook.com/share/19s3CokhiP/");
    strcpy(s[14].email, "hasib.hasan.th@gmail.com");
    strcpy(s[14].handle, "hasib.hasan.th");

    s[16].id = 16;
    strcpy(s[16].mobile, "01752192731");
    strcpy(s[16].name, "Md. Jahangir");
    strcpy(s[16].address, "Narayankhola, Nakla, Sherpur");
    strcpy(s[16].blood, "AB+");
    strcpy(s[16].fb_link, "https://www.facebook.com/profile.php?id=100055405996607");
    strcpy(s[16].email, "jahangiralom608549@gmail.com");
    strcpy(s[16].handle, "Jahanir_16");

    s[17].id = 17;
    strcpy(s[17].mobile, "01787899794");
    strcpy(s[17].name, "Mahmod Sayed");
    strcpy(s[17].address, "Gobindabati, Patnitola, Noagoan");
    strcpy(s[17].blood, "B+");
    strcpy(s[17].fb_link, "https://www.facebook.com/share/1Wt6U7VnPd/");
    strcpy(s[17].email, "mahmodsayed607@gmail.com");
    strcpy(s[17].handle, "Not available");

    s[18].id = 18;
    strcpy(s[18].mobile, "01787899794");
    strcpy(s[18].name, "Md. Mehedi Gazi");
    strcpy(s[18].address, "Krishnakathi, Bakerganj, Barishal");
    strcpy(s[18].blood, "O+");
    strcpy(s[18].fb_link, "https://www.facebook.com/md.mehedi.gazi.532027");
    strcpy(s[18].email, "mgazi4641@gmail.com");
    strcpy(s[18].handle, "mehedi18A");

    s[19].id = 19;
    strcpy(s[19].mobile, "01642802303");
    strcpy(s[19].name, "Md. Niamul Islam");
    strcpy(s[19].address, "Monkashair, Kasba, Brahmanbaria");
    strcpy(s[19].blood, "AB+");
    strcpy(s[19].fb_link, "https://www.facebook.com/mdniamul.islam.200");
    strcpy(s[19].email, "mdniamulislam220@gmail.com");
    strcpy(s[19].handle, "NIAMUL262014");

    s[20].id = 20;
    strcpy(s[20].mobile, "01833794034");
    strcpy(s[20].name, "Md Ridanul Islam");
    strcpy(s[20].address, "Assim Bazar, Fulbaria, Mymensign");
    strcpy(s[20].blood, "AB+");
    strcpy(s[20].fb_link, "https://www.facebook.com/Ridanul/");
    strcpy(s[20].email, "ridanul@outlook.com");
    strcpy(s[20].handle, "ridanul");

    s[21].id = 21;
    strcpy(s[21].mobile, " 01804746704");
    strcpy(s[21].name, "Md. Tanjan Mahmud Shuvo");
    strcpy(s[21].address, "Dhaka");
    strcpy(s[21].blood, "Not vailable");
    strcpy(s[21].fb_link, "Not available");
    strcpy(s[21].email, "Not available");
    strcpy(s[21].handle, "Not available");

    s[22].id = 22;
    strcpy(s[22].mobile, "01647690557");
    strcpy(s[22].name, "Md. Wasim Mia");
    strcpy(s[22].address, "Harenja, sidla, Hossinpure, Kishoreganj");
    strcpy(s[22].blood, "O+");
    strcpy(s[22].fb_link, "https://www.facebook.com/washim.akram.39224");
    strcpy(s[22].email, "washim01925719291@gamil.com");
    strcpy(s[22].handle, "akram787");

    s[23].id = 23;
    strcpy(s[23].mobile, "01575351782");
    strcpy(s[23].name, "Md. Zulkar Nain Jim");
    strcpy(s[23].address, "Bishubari, Gobindaganj, Gaibandha");
    strcpy(s[23].blood, "B+");
    strcpy(s[23].fb_link, "https://www.facebook.com/share/1EPd2ntFTk/");
    strcpy(s[23].email, "nainjim03@gmail.com");
    strcpy(s[23].handle, "zulkar_23");

    s[24].id = 24;
    strcpy(s[24].mobile, "01843566639");
    strcpy(s[24].name, "Most. Lina");
    strcpy(s[24].address, "Shitolpur, Pirganj, Thakurgaon");
    strcpy(s[24].blood, "A+");
    strcpy(s[24].fb_link, "https://www.facebook.com/profile.php?id=61565196400994");
    strcpy(s[24].email, "arohilina902@gmail.com");
    strcpy(s[24].handle, "Not available");

    s[27].id = 27;
    strcpy(s[27].mobile, "01305125386");
    strcpy(s[27].name, "Rezvy AHmed");
    strcpy(s[27].address, "Mymensign");
    strcpy(s[27].blood, "Not vailable");
    strcpy(s[27].fb_link, "Not available");
    strcpy(s[27].email, "Not available");
    strcpy(s[27].handle, "Not available");

    s[29].id = 29;
    strcpy(s[29].mobile, "01889947643");
    strcpy(s[29].name, "Sifat Ahmed Nannu");
    strcpy(s[29].address, "Tulshipur, Bagha, Rajshahi");
    strcpy(s[29].blood, "O+");
    strcpy(s[29].fb_link, "https://www.facebook.com/share/1PeDsyD5sP/");
    strcpy(s[29].email, "sifatahmed200411@gmail.com");
    strcpy(s[29].handle, "Not available");

    s[30].id = 30;
    strcpy(s[30].mobile, "01828385074");
    strcpy(s[30].name, "Tanvir Rahman");
    strcpy(s[30].address, "Rohimabad, Shajahanpur, Bagura");
    strcpy(s[30].blood, "A+");
    strcpy(s[30].fb_link, "https://www.facebook.com/tanvir.rahman.308534");
    strcpy(s[30].email, "tanvirrahman1717@gmail.com ");
    strcpy(s[30].handle, "TanvirR7");

    printf("Enter your ID: ");
    long long int n;
    scanf("%lld", &n);
    long long int x=n;
    if(n>30)
    {
        n=n%100;
    }
    
    if (n>30 || n == 3 || n == 7 || n == 12 || n == 15 || n == 25 || n == 26 || n == 28 || n == 202324104003 || n == 202324104007 
        || n == 202324104012 || n == 202324104015 || n == 202324104025 || n == 202324104026 || n == 202324104028 
        || n==03 || n==07)
    {
        printf("Student not available");
    }
    else
    {
        printf("Name         : %s\n", s[n].name);
        if(n<10)
        printf("ID           : 20232410400%lld\n", s[n].id);
        else
        printf("ID           : 2023241040%lld\n", s[n].id);
        printf("Mobile Number: %s\n", s[n].mobile);
        printf("Address      : %s\n", s[n].address);
        printf("Blood group  : %s\n", s[n].blood);
        printf("Facebook link: %s\n", s[n].fb_link);
        printf("Email        : %s\n", s[n].email);
        printf("CP handle    : %s\n", s[n].handle);
    }

    return 0;
}