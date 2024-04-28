/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_352.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1760(t_small_parse_table_array *v)
{
	v->a[35200] = 41;
	v->a[35201] = anon_sym_LPAREN_LPAREN;
	v->a[35202] = anon_sym_SEMI;
	v->a[35203] = anon_sym_PIPE_PIPE;
	v->a[35204] = anon_sym_AMP_AMP;
	v->a[35205] = anon_sym_PIPE;
	v->a[35206] = anon_sym_AMP;
	v->a[35207] = anon_sym_EQ_EQ;
	v->a[35208] = anon_sym_LT;
	v->a[35209] = anon_sym_GT;
	v->a[35210] = anon_sym_LT_LT;
	v->a[35211] = anon_sym_GT_GT;
	v->a[35212] = anon_sym_LPAREN;
	v->a[35213] = anon_sym_RPAREN;
	v->a[35214] = anon_sym_SEMI_SEMI;
	v->a[35215] = anon_sym_PIPE_AMP;
	v->a[35216] = anon_sym_EQ_TILDE;
	v->a[35217] = anon_sym_AMP_GT;
	v->a[35218] = anon_sym_AMP_GT_GT;
	v->a[35219] = anon_sym_LT_AMP;
	small_parse_table_1761(v);
}

void	small_parse_table_1761(t_small_parse_table_array *v)
{
	v->a[35220] = anon_sym_GT_AMP;
	v->a[35221] = anon_sym_GT_PIPE;
	v->a[35222] = anon_sym_LT_AMP_DASH;
	v->a[35223] = anon_sym_GT_AMP_DASH;
	v->a[35224] = anon_sym_LT_LT_DASH;
	v->a[35225] = anon_sym_LT_LT_LT;
	v->a[35226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35227] = anon_sym_DOLLAR_LBRACK;
	v->a[35228] = anon_sym_DOLLAR;
	v->a[35229] = sym__special_character;
	v->a[35230] = anon_sym_DQUOTE;
	v->a[35231] = sym_raw_string;
	v->a[35232] = sym_ansi_c_string;
	v->a[35233] = aux_sym_number_token1;
	v->a[35234] = aux_sym_number_token2;
	v->a[35235] = anon_sym_DOLLAR_LBRACE;
	v->a[35236] = anon_sym_DOLLAR_LPAREN;
	v->a[35237] = anon_sym_BQUOTE;
	v->a[35238] = anon_sym_DOLLAR_BQUOTE;
	v->a[35239] = anon_sym_LT_LPAREN;
	small_parse_table_1762(v);
}

void	small_parse_table_1762(t_small_parse_table_array *v)
{
	v->a[35240] = anon_sym_GT_LPAREN;
	v->a[35241] = sym_word;
	v->a[35242] = 22;
	v->a[35243] = actions(71);
	v->a[35244] = 1;
	v->a[35245] = sym_comment;
	v->a[35246] = actions(4763);
	v->a[35247] = 1;
	v->a[35248] = sym_word;
	v->a[35249] = actions(4767);
	v->a[35250] = 1;
	v->a[35251] = anon_sym_DOLLAR_LBRACK;
	v->a[35252] = actions(4769);
	v->a[35253] = 1;
	v->a[35254] = anon_sym_DOLLAR;
	v->a[35255] = actions(4771);
	v->a[35256] = 1;
	v->a[35257] = sym__special_character;
	v->a[35258] = actions(4773);
	v->a[35259] = 1;
	small_parse_table_1763(v);
}

void	small_parse_table_1763(t_small_parse_table_array *v)
{
	v->a[35260] = anon_sym_DQUOTE;
	v->a[35261] = actions(4777);
	v->a[35262] = 1;
	v->a[35263] = aux_sym_number_token1;
	v->a[35264] = actions(4779);
	v->a[35265] = 1;
	v->a[35266] = aux_sym_number_token2;
	v->a[35267] = actions(4781);
	v->a[35268] = 1;
	v->a[35269] = anon_sym_DOLLAR_LBRACE;
	v->a[35270] = actions(4783);
	v->a[35271] = 1;
	v->a[35272] = anon_sym_DOLLAR_LPAREN;
	v->a[35273] = actions(4785);
	v->a[35274] = 1;
	v->a[35275] = anon_sym_BQUOTE;
	v->a[35276] = actions(4787);
	v->a[35277] = 1;
	v->a[35278] = anon_sym_DOLLAR_BQUOTE;
	v->a[35279] = actions(4791);
	small_parse_table_1764(v);
}

void	small_parse_table_1764(t_small_parse_table_array *v)
{
	v->a[35280] = 1;
	v->a[35281] = sym_test_operator;
	v->a[35282] = actions(4793);
	v->a[35283] = 1;
	v->a[35284] = sym__brace_start;
	v->a[35285] = state(5357);
	v->a[35286] = 1;
	v->a[35287] = aux_sym__literal_repeat1;
	v->a[35288] = state(5539);
	v->a[35289] = 1;
	v->a[35290] = sym_concatenation;
	v->a[35291] = actions(4765);
	v->a[35292] = 2;
	v->a[35293] = anon_sym_LPAREN_LPAREN;
	v->a[35294] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35295] = actions(4775);
	v->a[35296] = 2;
	v->a[35297] = sym_raw_string;
	v->a[35298] = sym_ansi_c_string;
	v->a[35299] = actions(4789);
	small_parse_table_1765(v);
}

/* EOF small_parse_table_352.c */
