/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_717.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3585(t_small_parse_table_array *v)
{
	v->a[71700] = 10;
	v->a[71701] = actions(3);
	v->a[71702] = 1;
	v->a[71703] = sym_comment;
	v->a[71704] = actions(2492);
	v->a[71705] = 1;
	v->a[71706] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71707] = actions(2496);
	v->a[71708] = 1;
	v->a[71709] = anon_sym_DQUOTE;
	v->a[71710] = actions(2498);
	v->a[71711] = 1;
	v->a[71712] = anon_sym_DOLLAR_LBRACE;
	v->a[71713] = actions(2500);
	v->a[71714] = 1;
	v->a[71715] = anon_sym_DOLLAR_LPAREN;
	v->a[71716] = actions(2502);
	v->a[71717] = 1;
	v->a[71718] = anon_sym_BQUOTE;
	v->a[71719] = actions(2563);
	small_parse_table_3586(v);
}

void	small_parse_table_3586(t_small_parse_table_array *v)
{
	v->a[71720] = 1;
	v->a[71721] = anon_sym_DOLLAR;
	v->a[71722] = state(1797);
	v->a[71723] = 1;
	v->a[71724] = sym_concatenation;
	v->a[71725] = actions(2831);
	v->a[71726] = 3;
	v->a[71727] = sym_raw_string;
	v->a[71728] = sym_number;
	v->a[71729] = sym_word;
	v->a[71730] = state(1729);
	v->a[71731] = 5;
	v->a[71732] = sym_arithmetic_expansion;
	v->a[71733] = sym_string;
	v->a[71734] = sym_simple_expansion;
	v->a[71735] = sym_expansion;
	v->a[71736] = sym_command_substitution;
	v->a[71737] = 8;
	v->a[71738] = actions(680);
	v->a[71739] = 1;
	small_parse_table_3587(v);
}

void	small_parse_table_3587(t_small_parse_table_array *v)
{
	v->a[71740] = sym_comment;
	v->a[71741] = actions(761);
	v->a[71742] = 1;
	v->a[71743] = anon_sym_LT_LT;
	v->a[71744] = actions(1902);
	v->a[71745] = 1;
	v->a[71746] = sym_file_descriptor;
	v->a[71747] = actions(2837);
	v->a[71748] = 1;
	v->a[71749] = anon_sym_LT_LT_DASH;
	v->a[71750] = actions(1898);
	v->a[71751] = 2;
	v->a[71752] = anon_sym_LT;
	v->a[71753] = anon_sym_GT;
	v->a[71754] = actions(2833);
	v->a[71755] = 2;
	v->a[71756] = anon_sym_AMP_AMP;
	v->a[71757] = anon_sym_PIPE_PIPE;
	v->a[71758] = state(1059);
	v->a[71759] = 3;
	small_parse_table_3588(v);
}

void	small_parse_table_3588(t_small_parse_table_array *v)
{
	v->a[71760] = sym_file_redirect;
	v->a[71761] = sym_heredoc_redirect;
	v->a[71762] = aux_sym_redirected_statement_repeat1;
	v->a[71763] = actions(2835);
	v->a[71764] = 5;
	v->a[71765] = anon_sym_GT_GT;
	v->a[71766] = anon_sym_LT_AMP;
	v->a[71767] = anon_sym_GT_AMP;
	v->a[71768] = anon_sym_GT_PIPE;
	v->a[71769] = anon_sym_LT_GT;
	v->a[71770] = 7;
	v->a[71771] = actions(3);
	v->a[71772] = 1;
	v->a[71773] = sym_comment;
	v->a[71774] = actions(1801);
	v->a[71775] = 1;
	v->a[71776] = anon_sym_PERCENT;
	v->a[71777] = actions(2839);
	v->a[71778] = 1;
	v->a[71779] = anon_sym_RBRACE;
	small_parse_table_3589(v);
}

void	small_parse_table_3589(t_small_parse_table_array *v)
{
	v->a[71780] = state(2013);
	v->a[71781] = 1;
	v->a[71782] = sym__expansion_regex;
	v->a[71783] = state(2014);
	v->a[71784] = 1;
	v->a[71785] = sym__expansion_expression;
	v->a[71786] = actions(1807);
	v->a[71787] = 3;
	v->a[71788] = sym__immediate_double_hash;
	v->a[71789] = anon_sym_POUND;
	v->a[71790] = anon_sym_PERCENT_PERCENT;
	v->a[71791] = actions(1805);
	v->a[71792] = 8;
	v->a[71793] = anon_sym_COLON_DASH;
	v->a[71794] = anon_sym_DASH3;
	v->a[71795] = anon_sym_COLON_EQ;
	v->a[71796] = anon_sym_EQ2;
	v->a[71797] = anon_sym_COLON_QMARK;
	v->a[71798] = anon_sym_QMARK2;
	v->a[71799] = anon_sym_COLON_PLUS;
	small_parse_table_3590(v);
}

/* EOF small_parse_table_717.c */
