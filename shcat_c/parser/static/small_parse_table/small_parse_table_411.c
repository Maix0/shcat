/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_411.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2055(t_small_parse_table_array *v)
{
	v->a[41100] = anon_sym_LT_LT;
	v->a[41101] = anon_sym_GT_GT;
	v->a[41102] = anon_sym_RPAREN;
	v->a[41103] = anon_sym_SEMI_SEMI;
	v->a[41104] = anon_sym_PIPE_AMP;
	v->a[41105] = anon_sym_EQ_TILDE;
	v->a[41106] = anon_sym_AMP_GT;
	v->a[41107] = anon_sym_AMP_GT_GT;
	v->a[41108] = anon_sym_LT_AMP;
	v->a[41109] = anon_sym_GT_AMP;
	v->a[41110] = anon_sym_GT_PIPE;
	v->a[41111] = anon_sym_LT_AMP_DASH;
	v->a[41112] = anon_sym_GT_AMP_DASH;
	v->a[41113] = anon_sym_LT_LT_DASH;
	v->a[41114] = anon_sym_LT_LT_LT;
	v->a[41115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41116] = anon_sym_DOLLAR_LBRACK;
	v->a[41117] = anon_sym_DOLLAR;
	v->a[41118] = sym__special_character;
	v->a[41119] = anon_sym_DQUOTE;
	small_parse_table_2056(v);
}

void	small_parse_table_2056(t_small_parse_table_array *v)
{
	v->a[41120] = sym_raw_string;
	v->a[41121] = sym_ansi_c_string;
	v->a[41122] = aux_sym_number_token1;
	v->a[41123] = aux_sym_number_token2;
	v->a[41124] = anon_sym_DOLLAR_LBRACE;
	v->a[41125] = anon_sym_DOLLAR_LPAREN;
	v->a[41126] = anon_sym_BQUOTE;
	v->a[41127] = anon_sym_DOLLAR_BQUOTE;
	v->a[41128] = anon_sym_LT_LPAREN;
	v->a[41129] = anon_sym_GT_LPAREN;
	v->a[41130] = sym_word;
	v->a[41131] = 8;
	v->a[41132] = actions(3);
	v->a[41133] = 1;
	v->a[41134] = sym_comment;
	v->a[41135] = actions(1235);
	v->a[41136] = 1;
	v->a[41137] = sym_test_operator;
	v->a[41138] = actions(5086);
	v->a[41139] = 1;
	small_parse_table_2057(v);
}

void	small_parse_table_2057(t_small_parse_table_array *v)
{
	v->a[41140] = anon_sym_DQUOTE;
	v->a[41141] = actions(5090);
	v->a[41142] = 1;
	v->a[41143] = sym_variable_name;
	v->a[41144] = state(2442);
	v->a[41145] = 1;
	v->a[41146] = sym_string;
	v->a[41147] = actions(5088);
	v->a[41148] = 2;
	v->a[41149] = aux_sym__simple_variable_name_token1;
	v->a[41150] = aux_sym__multiline_variable_name_token1;
	v->a[41151] = actions(5084);
	v->a[41152] = 9;
	v->a[41153] = anon_sym_DASH;
	v->a[41154] = anon_sym_STAR;
	v->a[41155] = anon_sym_BANG;
	v->a[41156] = anon_sym_QMARK;
	v->a[41157] = anon_sym_DOLLAR;
	v->a[41158] = anon_sym_POUND;
	v->a[41159] = anon_sym_AT2;
	small_parse_table_2058(v);
}

void	small_parse_table_2058(t_small_parse_table_array *v)
{
	v->a[41160] = anon_sym_0;
	v->a[41161] = anon_sym__;
	v->a[41162] = actions(1227);
	v->a[41163] = 33;
	v->a[41164] = anon_sym_EQ;
	v->a[41165] = anon_sym_PLUS_PLUS;
	v->a[41166] = anon_sym_DASH_DASH;
	v->a[41167] = anon_sym_PLUS_EQ;
	v->a[41168] = anon_sym_DASH_EQ;
	v->a[41169] = anon_sym_STAR_EQ;
	v->a[41170] = anon_sym_SLASH_EQ;
	v->a[41171] = anon_sym_PERCENT_EQ;
	v->a[41172] = anon_sym_STAR_STAR_EQ;
	v->a[41173] = anon_sym_LT_LT_EQ;
	v->a[41174] = anon_sym_GT_GT_EQ;
	v->a[41175] = anon_sym_AMP_EQ;
	v->a[41176] = anon_sym_CARET_EQ;
	v->a[41177] = anon_sym_PIPE_EQ;
	v->a[41178] = anon_sym_PIPE_PIPE;
	v->a[41179] = anon_sym_AMP_AMP;
	small_parse_table_2059(v);
}

void	small_parse_table_2059(t_small_parse_table_array *v)
{
	v->a[41180] = anon_sym_PIPE;
	v->a[41181] = anon_sym_CARET;
	v->a[41182] = anon_sym_AMP;
	v->a[41183] = anon_sym_EQ_EQ;
	v->a[41184] = anon_sym_BANG_EQ;
	v->a[41185] = anon_sym_LT;
	v->a[41186] = anon_sym_GT;
	v->a[41187] = anon_sym_LT_EQ;
	v->a[41188] = anon_sym_GT_EQ;
	v->a[41189] = anon_sym_LT_LT;
	v->a[41190] = anon_sym_GT_GT;
	v->a[41191] = anon_sym_PLUS;
	v->a[41192] = anon_sym_SLASH;
	v->a[41193] = anon_sym_PERCENT;
	v->a[41194] = anon_sym_STAR_STAR;
	v->a[41195] = anon_sym_EQ_TILDE;
	v->a[41196] = anon_sym_COLON;
	v->a[41197] = 8;
	v->a[41198] = actions(3);
	v->a[41199] = 1;
	small_parse_table_2060(v);
}

/* EOF small_parse_table_411.c */
