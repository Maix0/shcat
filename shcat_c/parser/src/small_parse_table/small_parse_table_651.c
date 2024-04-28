/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_651.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3255(t_small_parse_table_array *v)
{
	v->a[65100] = anon_sym_GT_GT;
	v->a[65101] = anon_sym_AMP_GT;
	v->a[65102] = anon_sym_AMP_GT_GT;
	v->a[65103] = anon_sym_LT_AMP;
	v->a[65104] = anon_sym_GT_AMP;
	v->a[65105] = anon_sym_GT_PIPE;
	v->a[65106] = anon_sym_LT_AMP_DASH;
	v->a[65107] = anon_sym_GT_AMP_DASH;
	v->a[65108] = aux_sym_heredoc_redirect_token1;
	v->a[65109] = anon_sym_LT_LT_LT;
	v->a[65110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65111] = anon_sym_DOLLAR_LBRACK;
	v->a[65112] = sym__special_character;
	v->a[65113] = sym_raw_string;
	v->a[65114] = sym_ansi_c_string;
	v->a[65115] = aux_sym_number_token1;
	v->a[65116] = aux_sym_number_token2;
	v->a[65117] = anon_sym_DOLLAR_LBRACE;
	v->a[65118] = anon_sym_DOLLAR_LPAREN;
	v->a[65119] = anon_sym_BQUOTE;
	small_parse_table_3256(v);
}

void	small_parse_table_3256(t_small_parse_table_array *v)
{
	v->a[65120] = anon_sym_DOLLAR_BQUOTE;
	v->a[65121] = anon_sym_LT_LPAREN;
	v->a[65122] = anon_sym_GT_LPAREN;
	v->a[65123] = sym_word;
	v->a[65124] = 8;
	v->a[65125] = actions(3);
	v->a[65126] = 1;
	v->a[65127] = sym_comment;
	v->a[65128] = actions(5614);
	v->a[65129] = 1;
	v->a[65130] = anon_sym_DQUOTE;
	v->a[65131] = actions(5719);
	v->a[65132] = 1;
	v->a[65133] = sym_variable_name;
	v->a[65134] = state(3393);
	v->a[65135] = 1;
	v->a[65136] = sym_string;
	v->a[65137] = actions(5717);
	v->a[65138] = 2;
	v->a[65139] = aux_sym__simple_variable_name_token1;
	small_parse_table_3257(v);
}

void	small_parse_table_3257(t_small_parse_table_array *v)
{
	v->a[65140] = aux_sym__multiline_variable_name_token1;
	v->a[65141] = actions(1241);
	v->a[65142] = 3;
	v->a[65143] = sym_file_descriptor;
	v->a[65144] = sym_test_operator;
	v->a[65145] = sym__brace_start;
	v->a[65146] = actions(5715);
	v->a[65147] = 9;
	v->a[65148] = anon_sym_DASH;
	v->a[65149] = anon_sym_STAR;
	v->a[65150] = anon_sym_BANG;
	v->a[65151] = anon_sym_QMARK;
	v->a[65152] = anon_sym_DOLLAR;
	v->a[65153] = anon_sym_POUND;
	v->a[65154] = anon_sym_AT2;
	v->a[65155] = anon_sym_0;
	v->a[65156] = anon_sym__;
	v->a[65157] = actions(1239);
	v->a[65158] = 29;
	v->a[65159] = anon_sym_LPAREN_LPAREN;
	small_parse_table_3258(v);
}

void	small_parse_table_3258(t_small_parse_table_array *v)
{
	v->a[65160] = anon_sym_PIPE_PIPE;
	v->a[65161] = anon_sym_AMP_AMP;
	v->a[65162] = anon_sym_LT;
	v->a[65163] = anon_sym_GT;
	v->a[65164] = anon_sym_GT_GT;
	v->a[65165] = anon_sym_AMP_GT;
	v->a[65166] = anon_sym_AMP_GT_GT;
	v->a[65167] = anon_sym_LT_AMP;
	v->a[65168] = anon_sym_GT_AMP;
	v->a[65169] = anon_sym_GT_PIPE;
	v->a[65170] = anon_sym_LT_AMP_DASH;
	v->a[65171] = anon_sym_GT_AMP_DASH;
	v->a[65172] = aux_sym_heredoc_redirect_token1;
	v->a[65173] = anon_sym_LT_LT_LT;
	v->a[65174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65175] = anon_sym_DOLLAR_LBRACK;
	v->a[65176] = sym__special_character;
	v->a[65177] = sym_raw_string;
	v->a[65178] = sym_ansi_c_string;
	v->a[65179] = aux_sym_number_token1;
	small_parse_table_3259(v);
}

void	small_parse_table_3259(t_small_parse_table_array *v)
{
	v->a[65180] = aux_sym_number_token2;
	v->a[65181] = anon_sym_DOLLAR_LBRACE;
	v->a[65182] = anon_sym_DOLLAR_LPAREN;
	v->a[65183] = anon_sym_BQUOTE;
	v->a[65184] = anon_sym_DOLLAR_BQUOTE;
	v->a[65185] = anon_sym_LT_LPAREN;
	v->a[65186] = anon_sym_GT_LPAREN;
	v->a[65187] = sym_word;
	v->a[65188] = 3;
	v->a[65189] = actions(3);
	v->a[65190] = 1;
	v->a[65191] = sym_comment;
	v->a[65192] = actions(1346);
	v->a[65193] = 6;
	v->a[65194] = sym_file_descriptor;
	v->a[65195] = sym__concat;
	v->a[65196] = sym_variable_name;
	v->a[65197] = sym_test_operator;
	v->a[65198] = sym__brace_start;
	v->a[65199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3260(v);
}

/* EOF small_parse_table_651.c */
