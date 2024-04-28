/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_251.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1255(t_small_parse_table_array *v)
{
	v->a[25100] = anon_sym_LBRACE;
	v->a[25101] = anon_sym_LBRACK_LBRACK;
	v->a[25102] = anon_sym_AMP_GT_GT;
	v->a[25103] = anon_sym_GT_PIPE;
	v->a[25104] = anon_sym_LT_AMP_DASH;
	v->a[25105] = anon_sym_GT_AMP_DASH;
	v->a[25106] = anon_sym_LT_LT_LT;
	v->a[25107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25108] = anon_sym_DOLLAR_LBRACK;
	v->a[25109] = anon_sym_DQUOTE;
	v->a[25110] = sym_raw_string;
	v->a[25111] = sym_ansi_c_string;
	v->a[25112] = anon_sym_DOLLAR_LBRACE;
	v->a[25113] = anon_sym_BQUOTE;
	v->a[25114] = anon_sym_DOLLAR_BQUOTE;
	v->a[25115] = anon_sym_LT_LPAREN;
	v->a[25116] = anon_sym_GT_LPAREN;
	v->a[25117] = actions(2715);
	v->a[25118] = 28;
	v->a[25119] = anon_sym_for;
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = anon_sym_select;
	v->a[25121] = anon_sym_LT;
	v->a[25122] = anon_sym_GT;
	v->a[25123] = anon_sym_LPAREN;
	v->a[25124] = anon_sym_while;
	v->a[25125] = anon_sym_until;
	v->a[25126] = anon_sym_if;
	v->a[25127] = anon_sym_case;
	v->a[25128] = anon_sym_function;
	v->a[25129] = anon_sym_BANG;
	v->a[25130] = anon_sym_LBRACK;
	v->a[25131] = anon_sym_declare;
	v->a[25132] = anon_sym_typeset;
	v->a[25133] = anon_sym_export;
	v->a[25134] = anon_sym_readonly;
	v->a[25135] = anon_sym_local;
	v->a[25136] = anon_sym_unset;
	v->a[25137] = anon_sym_unsetenv;
	v->a[25138] = anon_sym_AMP_GT;
	v->a[25139] = anon_sym_LT_AMP;
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = anon_sym_GT_AMP;
	v->a[25141] = anon_sym_DOLLAR;
	v->a[25142] = sym__special_character;
	v->a[25143] = aux_sym_number_token1;
	v->a[25144] = aux_sym_number_token2;
	v->a[25145] = anon_sym_DOLLAR_LPAREN;
	v->a[25146] = sym_word;
	v->a[25147] = 8;
	v->a[25148] = actions(3);
	v->a[25149] = 1;
	v->a[25150] = sym_comment;
	v->a[25151] = actions(2267);
	v->a[25152] = 1;
	v->a[25153] = anon_sym_DQUOTE;
	v->a[25154] = actions(3829);
	v->a[25155] = 1;
	v->a[25156] = sym_variable_name;
	v->a[25157] = state(1595);
	v->a[25158] = 1;
	v->a[25159] = sym_string;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = actions(3827);
	v->a[25161] = 2;
	v->a[25162] = aux_sym__simple_variable_name_token1;
	v->a[25163] = aux_sym__multiline_variable_name_token1;
	v->a[25164] = actions(1235);
	v->a[25165] = 3;
	v->a[25166] = sym_file_descriptor;
	v->a[25167] = sym_test_operator;
	v->a[25168] = sym__brace_start;
	v->a[25169] = actions(3825);
	v->a[25170] = 9;
	v->a[25171] = anon_sym_DASH;
	v->a[25172] = anon_sym_STAR;
	v->a[25173] = anon_sym_BANG;
	v->a[25174] = anon_sym_QMARK;
	v->a[25175] = anon_sym_DOLLAR;
	v->a[25176] = anon_sym_POUND;
	v->a[25177] = anon_sym_AT2;
	v->a[25178] = anon_sym_0;
	v->a[25179] = anon_sym__;
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = actions(1227);
	v->a[25181] = 35;
	v->a[25182] = anon_sym_LPAREN_LPAREN;
	v->a[25183] = anon_sym_SEMI;
	v->a[25184] = anon_sym_PIPE_PIPE;
	v->a[25185] = anon_sym_AMP_AMP;
	v->a[25186] = anon_sym_PIPE;
	v->a[25187] = anon_sym_AMP;
	v->a[25188] = anon_sym_LT;
	v->a[25189] = anon_sym_GT;
	v->a[25190] = anon_sym_LT_LT;
	v->a[25191] = anon_sym_GT_GT;
	v->a[25192] = anon_sym_SEMI_SEMI;
	v->a[25193] = anon_sym_PIPE_AMP;
	v->a[25194] = anon_sym_AMP_GT;
	v->a[25195] = anon_sym_AMP_GT_GT;
	v->a[25196] = anon_sym_LT_AMP;
	v->a[25197] = anon_sym_GT_AMP;
	v->a[25198] = anon_sym_GT_PIPE;
	v->a[25199] = anon_sym_LT_AMP_DASH;
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
