package inputnama.java;

import java.util.Scanner;

public class InputNamaJava {


    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        String nama;
        String tempat_lahir;
        int tanggal_lahir;
        int umur;
        String hobi;

        System.out.print("Nama: ");
        nama = input.nextLine();

        System.out.print("Tempat Lahir: ");
        tempat_lahir = input.nextLine();

        System.out.print("Tanggal Lahir: ");
        tanggal_lahir = input.nextInt();

        System.out.print("Umur: ");
        umur = input.nextInt();
        input.nextLine();

        System.out.print("Hobi: ");
        hobi = input.nextLine();
        
        System.out.println("-----------------------------------" );
        System.out.println("Nama: " + nama);
        System.out.println("Tempat Lahir: " + tempat_lahir);
        System.out.println("Tanggal Lahir: " + tanggal_lahir);
        System.out.println("Umur: " + umur);
        System.out.println("Hobi: " + hobi);
        System.out.println("-----------------------------------" );
    }
}
    
        
        
