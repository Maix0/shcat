/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1662.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8310(t_small_parse_table_array *v)
{
	v->a[166200] = anon_sym_GT;
	v->a[166201] = anon_sym_LT_LT;
	v->a[166202] = anon_sym_GT_GT;
	v->a[166203] = anon_sym_PLUS;
	v->a[166204] = anon_sym_DASH;
	v->a[166205] = anon_sym_STAR;
	v->a[166206] = anon_sym_SLASH;
	v->a[166207] = anon_sym_PERCENT;
	v->a[166208] = anon_sym_STAR_STAR;
	v->a[166209] = actions(6799);
	v->a[166210] = 23;
	v->a[166211] = sym_test_operator;
	v->a[166212] = anon_sym_PLUS_PLUS;
	v->a[166213] = anon_sym_DASH_DASH;
	v->a[166214] = anon_sym_PLUS_EQ;
	v->a[166215] = anon_sym_DASH_EQ;
	v->a[166216] = anon_sym_STAR_EQ;
	v->a[166217] = anon_sym_SLASH_EQ;
	v->a[166218] = anon_sym_PERCENT_EQ;
	v->a[166219] = anon_sym_STAR_STAR_EQ;
	small_parse_table_8311(v);
}

void	small_parse_table_8311(t_small_parse_table_array *v)
{
	v->a[166220] = anon_sym_LT_LT_EQ;
	v->a[166221] = anon_sym_GT_GT_EQ;
	v->a[166222] = anon_sym_AMP_EQ;
	v->a[166223] = anon_sym_CARET_EQ;
	v->a[166224] = anon_sym_PIPE_EQ;
	v->a[166225] = anon_sym_PIPE_PIPE;
	v->a[166226] = anon_sym_AMP_AMP;
	v->a[166227] = anon_sym_EQ_EQ;
	v->a[166228] = anon_sym_BANG_EQ;
	v->a[166229] = anon_sym_LT_EQ;
	v->a[166230] = anon_sym_GT_EQ;
	v->a[166231] = anon_sym_RPAREN;
	v->a[166232] = anon_sym_EQ_TILDE;
	v->a[166233] = anon_sym_QMARK;
	v->a[166234] = 25;
	v->a[166235] = actions(71);
	v->a[166236] = 1;
	v->a[166237] = sym_comment;
	v->a[166238] = actions(6474);
	v->a[166239] = 1;
	small_parse_table_8312(v);
}

void	small_parse_table_8312(t_small_parse_table_array *v)
{
	v->a[166240] = sym_word;
	v->a[166241] = actions(6480);
	v->a[166242] = 1;
	v->a[166243] = anon_sym_LPAREN;
	v->a[166244] = actions(6488);
	v->a[166245] = 1;
	v->a[166246] = anon_sym_DOLLAR;
	v->a[166247] = actions(6494);
	v->a[166248] = 1;
	v->a[166249] = aux_sym_number_token1;
	v->a[166250] = actions(6496);
	v->a[166251] = 1;
	v->a[166252] = aux_sym_number_token2;
	v->a[166253] = actions(6500);
	v->a[166254] = 1;
	v->a[166255] = anon_sym_DOLLAR_LPAREN;
	v->a[166256] = actions(6508);
	v->a[166257] = 1;
	v->a[166258] = sym_test_operator;
	v->a[166259] = actions(6510);
	small_parse_table_8313(v);
}

void	small_parse_table_8313(t_small_parse_table_array *v)
{
	v->a[166260] = 1;
	v->a[166261] = sym_extglob_pattern;
	v->a[166262] = actions(6512);
	v->a[166263] = 1;
	v->a[166264] = sym__brace_start;
	v->a[166265] = actions(7226);
	v->a[166266] = 1;
	v->a[166267] = anon_sym_DOLLAR_LBRACK;
	v->a[166268] = actions(7228);
	v->a[166269] = 1;
	v->a[166270] = sym__special_character;
	v->a[166271] = actions(7230);
	v->a[166272] = 1;
	v->a[166273] = anon_sym_DQUOTE;
	v->a[166274] = actions(7234);
	v->a[166275] = 1;
	v->a[166276] = anon_sym_DOLLAR_LBRACE;
	v->a[166277] = actions(7236);
	v->a[166278] = 1;
	v->a[166279] = anon_sym_BQUOTE;
	small_parse_table_8314(v);
}

void	small_parse_table_8314(t_small_parse_table_array *v)
{
	v->a[166280] = actions(7238);
	v->a[166281] = 1;
	v->a[166282] = anon_sym_DOLLAR_BQUOTE;
	v->a[166283] = actions(7515);
	v->a[166284] = 1;
	v->a[166285] = anon_sym_esac;
	v->a[166286] = state(6426);
	v->a[166287] = 1;
	v->a[166288] = aux_sym__literal_repeat1;
	v->a[166289] = state(7495);
	v->a[166290] = 1;
	v->a[166291] = sym_last_case_item;
	v->a[166292] = actions(7224);
	v->a[166293] = 2;
	v->a[166294] = anon_sym_LPAREN_LPAREN;
	v->a[166295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[166296] = actions(7232);
	v->a[166297] = 2;
	v->a[166298] = sym_raw_string;
	v->a[166299] = sym_ansi_c_string;
	small_parse_table_8315(v);
}

/* EOF small_parse_table_1662.c */
