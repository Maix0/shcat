/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1611.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8055(t_small_parse_table_array *v)
{
	v->a[161100] = anon_sym_PERCENT;
	v->a[161101] = actions(7174);
	v->a[161102] = 11;
	v->a[161103] = anon_sym_PLUS_EQ;
	v->a[161104] = anon_sym_DASH_EQ;
	v->a[161105] = anon_sym_STAR_EQ;
	v->a[161106] = anon_sym_SLASH_EQ;
	v->a[161107] = anon_sym_PERCENT_EQ;
	v->a[161108] = anon_sym_STAR_STAR_EQ;
	v->a[161109] = anon_sym_LT_LT_EQ;
	v->a[161110] = anon_sym_GT_GT_EQ;
	v->a[161111] = anon_sym_AMP_EQ;
	v->a[161112] = anon_sym_CARET_EQ;
	v->a[161113] = anon_sym_PIPE_EQ;
	v->a[161114] = 25;
	v->a[161115] = actions(71);
	v->a[161116] = 1;
	v->a[161117] = sym_comment;
	v->a[161118] = actions(6474);
	v->a[161119] = 1;
	small_parse_table_8056(v);
}

void	small_parse_table_8056(t_small_parse_table_array *v)
{
	v->a[161120] = sym_word;
	v->a[161121] = actions(6480);
	v->a[161122] = 1;
	v->a[161123] = anon_sym_LPAREN;
	v->a[161124] = actions(6488);
	v->a[161125] = 1;
	v->a[161126] = anon_sym_DOLLAR;
	v->a[161127] = actions(6494);
	v->a[161128] = 1;
	v->a[161129] = aux_sym_number_token1;
	v->a[161130] = actions(6496);
	v->a[161131] = 1;
	v->a[161132] = aux_sym_number_token2;
	v->a[161133] = actions(6500);
	v->a[161134] = 1;
	v->a[161135] = anon_sym_DOLLAR_LPAREN;
	v->a[161136] = actions(6508);
	v->a[161137] = 1;
	v->a[161138] = sym_test_operator;
	v->a[161139] = actions(6510);
	small_parse_table_8057(v);
}

void	small_parse_table_8057(t_small_parse_table_array *v)
{
	v->a[161140] = 1;
	v->a[161141] = sym_extglob_pattern;
	v->a[161142] = actions(6512);
	v->a[161143] = 1;
	v->a[161144] = sym__brace_start;
	v->a[161145] = actions(6580);
	v->a[161146] = 1;
	v->a[161147] = anon_sym_esac;
	v->a[161148] = actions(7226);
	v->a[161149] = 1;
	v->a[161150] = anon_sym_DOLLAR_LBRACK;
	v->a[161151] = actions(7228);
	v->a[161152] = 1;
	v->a[161153] = sym__special_character;
	v->a[161154] = actions(7230);
	v->a[161155] = 1;
	v->a[161156] = anon_sym_DQUOTE;
	v->a[161157] = actions(7234);
	v->a[161158] = 1;
	v->a[161159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_8058(v);
}

void	small_parse_table_8058(t_small_parse_table_array *v)
{
	v->a[161160] = actions(7236);
	v->a[161161] = 1;
	v->a[161162] = anon_sym_BQUOTE;
	v->a[161163] = actions(7238);
	v->a[161164] = 1;
	v->a[161165] = anon_sym_DOLLAR_BQUOTE;
	v->a[161166] = state(6426);
	v->a[161167] = 1;
	v->a[161168] = aux_sym__literal_repeat1;
	v->a[161169] = state(6824);
	v->a[161170] = 1;
	v->a[161171] = sym_last_case_item;
	v->a[161172] = actions(7224);
	v->a[161173] = 2;
	v->a[161174] = anon_sym_LPAREN_LPAREN;
	v->a[161175] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[161176] = actions(7232);
	v->a[161177] = 2;
	v->a[161178] = sym_raw_string;
	v->a[161179] = sym_ansi_c_string;
	small_parse_table_8059(v);
}

void	small_parse_table_8059(t_small_parse_table_array *v)
{
	v->a[161180] = actions(7240);
	v->a[161181] = 2;
	v->a[161182] = anon_sym_LT_LPAREN;
	v->a[161183] = anon_sym_GT_LPAREN;
	v->a[161184] = state(3378);
	v->a[161185] = 2;
	v->a[161186] = sym_case_item;
	v->a[161187] = aux_sym_case_statement_repeat1;
	v->a[161188] = state(6695);
	v->a[161189] = 2;
	v->a[161190] = sym_concatenation;
	v->a[161191] = sym__extglob_blob;
	v->a[161192] = state(6303);
	v->a[161193] = 9;
	v->a[161194] = sym_arithmetic_expansion;
	v->a[161195] = sym_brace_expression;
	v->a[161196] = sym_string;
	v->a[161197] = sym_translated_string;
	v->a[161198] = sym_number;
	v->a[161199] = sym_simple_expansion;
	small_parse_table_8060(v);
}

/* EOF small_parse_table_1611.c */
