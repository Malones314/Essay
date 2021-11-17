/****位运算得到单词中存在的字母，用于判断多个单词是否有公共字母
*word：用于存储单词中出现的字母
*strword：用于判断的单词
******/
int getAllAlphabets ( string strword ) {
	int word = 0;
	for ( int i = 0; i < strword.length ( ); i++ ) {
		word |= 1 << ( strword [i] - 'a' );
	}
}
