import java.util.*;
import java.io.*;
public class Merge_Sort {
	static void merge(int a[], int l, int r, int m){
		int n1 = m - l + 1;
		int n2= r - m;
		int b[] = new int[n1];
		int c[] = new int[n2];
		int k = 0;
		for(int i = l; i <= m; i++){
			b[k] = a[i];
			k++;
		}
		k = 0;
		for(int i = m + 1; i <= r; i++){
			c[k] = a[i];
			k++;
		}
		int f = 0, s = 0;
		int j = l;
		while(f < n1 && s < n2){
			if(b[f] > c[s]){
				a[j] = c[s];
				s++;
			}
			else{
				a[j] = b[f];
				f++;
			}
			j++;
		}
		while(f < n1){
			a[j] = b[f];
			f++;
			j++;
		}
		while(s < n2){
			a[j] = c[s];
			s++;
			j++;
		}
		

	}

	static void sort(int a[], int l, int r){
		if(l < r){
		int m = (l + r) / 2;
		sort(a, l, m);
		sort(a, m + 1, r);
		merge(a, l, r, m);

	}
	}

	static void display_array(int a[], int l, int r){
		for(int i = l; i <= r; i++)
			System.out.print(a[i] + " ");
		System.out.println();
	}

	public static void main(String[] args) throws Exception {
	Reader.init(System.in);
	int n = Reader.nextint();
	int a[] = new int[n];
	for(int i = 0; i< n; i++)
		a[i] = Reader.nextint();
	sort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
			System.out.print(a[i] + " ");
		
	}
}
class Reader {
	
    static BufferedReader reader;
    static StringTokenizer tokenizer;

    static void init(InputStream input) {
        reader = new BufferedReader(new InputStreamReader(input) );
        tokenizer = new StringTokenizer("");
    }

    static String next() throws IOException {
        while ( ! tokenizer.hasMoreTokens() ) {
            //TODO add check for eof if necessary
            tokenizer = new StringTokenizer(
                   reader.readLine() );
        }
        return tokenizer.nextToken();
    }

    static int nextint() throws IOException {
        return Integer.parseInt( next() );
    }
    
    static long nextlong() throws IOException {
        return Long.parseLong( next() );
    }
    
    static double nextdouble() throws IOException {
        return Double.parseDouble( next() );
    }
    
}