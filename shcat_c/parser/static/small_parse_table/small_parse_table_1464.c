/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1464.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7320(t_small_parse_table_array *v)
{
	v->a[146400] = anon_sym_PLUS;
	v->a[146401] = anon_sym_DASH;
	v->a[146402] = actions(6909);
	v->a[146403] = 3;
	v->a[146404] = anon_sym_STAR;
	v->a[146405] = anon_sym_SLASH;
	v->a[146406] = anon_sym_PERCENT;
	v->a[146407] = actions(6887);
	v->a[146408] = 11;
	v->a[146409] = anon_sym_PLUS_EQ;
	v->a[146410] = anon_sym_DASH_EQ;
	v->a[146411] = anon_sym_STAR_EQ;
	v->a[146412] = anon_sym_SLASH_EQ;
	v->a[146413] = anon_sym_PERCENT_EQ;
	v->a[146414] = anon_sym_STAR_STAR_EQ;
	v->a[146415] = anon_sym_LT_LT_EQ;
	v->a[146416] = anon_sym_GT_GT_EQ;
	v->a[146417] = anon_sym_AMP_EQ;
	v->a[146418] = anon_sym_CARET_EQ;
	v->a[146419] = anon_sym_PIPE_EQ;
	small_parse_table_7321(v);
}

void	small_parse_table_7321(t_small_parse_table_array *v)
{
	v->a[146420] = 7;
	v->a[146421] = actions(71);
	v->a[146422] = 1;
	v->a[146423] = sym_comment;
	v->a[146424] = actions(5821);
	v->a[146425] = 2;
	v->a[146426] = anon_sym_PIPE;
	v->a[146427] = anon_sym_LT_LT;
	v->a[146428] = actions(5826);
	v->a[146429] = 4;
	v->a[146430] = anon_sym_PIPE_PIPE;
	v->a[146431] = anon_sym_AMP_AMP;
	v->a[146432] = anon_sym_PIPE_AMP;
	v->a[146433] = anon_sym_LT_LT_DASH;
	v->a[146434] = actions(5819);
	v->a[146435] = 5;
	v->a[146436] = anon_sym_DOLLAR;
	v->a[146437] = aux_sym_number_token1;
	v->a[146438] = aux_sym_number_token2;
	v->a[146439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_7322(v);
}

void	small_parse_table_7322(t_small_parse_table_array *v)
{
	v->a[146440] = sym_word;
	v->a[146441] = actions(5823);
	v->a[146442] = 5;
	v->a[146443] = anon_sym_LT;
	v->a[146444] = anon_sym_GT;
	v->a[146445] = anon_sym_AMP_GT;
	v->a[146446] = anon_sym_LT_AMP;
	v->a[146447] = anon_sym_GT_AMP;
	v->a[146448] = actions(5828);
	v->a[146449] = 7;
	v->a[146450] = sym_file_descriptor;
	v->a[146451] = anon_sym_GT_GT;
	v->a[146452] = anon_sym_AMP_GT_GT;
	v->a[146453] = anon_sym_GT_PIPE;
	v->a[146454] = anon_sym_LT_AMP_DASH;
	v->a[146455] = anon_sym_GT_AMP_DASH;
	v->a[146456] = anon_sym_LT_LT_LT;
	v->a[146457] = actions(5831);
	v->a[146458] = 15;
	v->a[146459] = sym_variable_name;
	small_parse_table_7323(v);
}

void	small_parse_table_7323(t_small_parse_table_array *v)
{
	v->a[146460] = sym_test_operator;
	v->a[146461] = sym__brace_start;
	v->a[146462] = anon_sym_LPAREN_LPAREN;
	v->a[146463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[146464] = anon_sym_DOLLAR_LBRACK;
	v->a[146465] = sym__special_character;
	v->a[146466] = anon_sym_DQUOTE;
	v->a[146467] = sym_raw_string;
	v->a[146468] = sym_ansi_c_string;
	v->a[146469] = anon_sym_DOLLAR_LBRACE;
	v->a[146470] = anon_sym_BQUOTE;
	v->a[146471] = anon_sym_DOLLAR_BQUOTE;
	v->a[146472] = anon_sym_LT_LPAREN;
	v->a[146473] = anon_sym_GT_LPAREN;
	v->a[146474] = 21;
	v->a[146475] = actions(71);
	v->a[146476] = 1;
	v->a[146477] = sym_comment;
	v->a[146478] = actions(6881);
	v->a[146479] = 1;
	small_parse_table_7324(v);
}

void	small_parse_table_7324(t_small_parse_table_array *v)
{
	v->a[146480] = anon_sym_COMMA;
	v->a[146481] = actions(6883);
	v->a[146482] = 1;
	v->a[146483] = anon_sym_EQ;
	v->a[146484] = actions(6889);
	v->a[146485] = 1;
	v->a[146486] = anon_sym_PIPE_PIPE;
	v->a[146487] = actions(6891);
	v->a[146488] = 1;
	v->a[146489] = anon_sym_AMP_AMP;
	v->a[146490] = actions(6893);
	v->a[146491] = 1;
	v->a[146492] = anon_sym_PIPE;
	v->a[146493] = actions(6895);
	v->a[146494] = 1;
	v->a[146495] = anon_sym_CARET;
	v->a[146496] = actions(6897);
	v->a[146497] = 1;
	v->a[146498] = anon_sym_AMP;
	v->a[146499] = actions(6911);
	small_parse_table_7325(v);
}

/* EOF small_parse_table_1464.c */
