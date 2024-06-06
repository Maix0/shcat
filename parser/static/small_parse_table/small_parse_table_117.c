/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_117.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_585(t_small_parse_table_array *v)
{
	v->a[11700] = anon_sym_DOLLAR_LPAREN;
	v->a[11701] = anon_sym_BQUOTE;
	v->a[11702] = anon_sym_DOLLAR_BQUOTE;
	v->a[11703] = sym_word;
	v->a[11704] = anon_sym_SEMI;
	v->a[11705] = 19;
	v->a[11706] = actions(3);
	v->a[11707] = 1;
	v->a[11708] = sym_comment;
	v->a[11709] = actions(1811);
	v->a[11710] = 1;
	v->a[11711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11712] = actions(1814);
	v->a[11713] = 1;
	v->a[11714] = anon_sym_DOLLAR;
	v->a[11715] = actions(1820);
	v->a[11716] = 1;
	v->a[11717] = anon_sym_DQUOTE;
	v->a[11718] = actions(1823);
	v->a[11719] = 1;
	small_parse_table_586(v);
}

void	small_parse_table_586(t_small_parse_table_array *v)
{
	v->a[11720] = aux_sym_number_token1;
	v->a[11721] = actions(1826);
	v->a[11722] = 1;
	v->a[11723] = aux_sym_number_token2;
	v->a[11724] = actions(1829);
	v->a[11725] = 1;
	v->a[11726] = anon_sym_DOLLAR_LBRACE;
	v->a[11727] = actions(1832);
	v->a[11728] = 1;
	v->a[11729] = anon_sym_DOLLAR_LPAREN;
	v->a[11730] = actions(1835);
	v->a[11731] = 1;
	v->a[11732] = anon_sym_BQUOTE;
	v->a[11733] = actions(1838);
	v->a[11734] = 1;
	v->a[11735] = anon_sym_DOLLAR_BQUOTE;
	v->a[11736] = actions(1844);
	v->a[11737] = 1;
	v->a[11738] = sym__brace_start;
	v->a[11739] = actions(2332);
	small_parse_table_587(v);
}

void	small_parse_table_587(t_small_parse_table_array *v)
{
	v->a[11740] = 1;
	v->a[11741] = sym__special_character;
	v->a[11742] = actions(2335);
	v->a[11743] = 1;
	v->a[11744] = sym_test_operator;
	v->a[11745] = state(1237);
	v->a[11746] = 1;
	v->a[11747] = aux_sym__literal_repeat1;
	v->a[11748] = actions(2329);
	v->a[11749] = 2;
	v->a[11750] = sym_raw_string;
	v->a[11751] = sym_word;
	v->a[11752] = state(410);
	v->a[11753] = 2;
	v->a[11754] = sym_concatenation;
	v->a[11755] = aux_sym_for_statement_repeat1;
	v->a[11756] = actions(1287);
	v->a[11757] = 3;
	v->a[11758] = sym_file_descriptor;
	v->a[11759] = sym_variable_name;
	small_parse_table_588(v);
}

void	small_parse_table_588(t_small_parse_table_array *v)
{
	v->a[11760] = aux_sym_heredoc_redirect_token1;
	v->a[11761] = state(1107);
	v->a[11762] = 7;
	v->a[11763] = sym_arithmetic_expansion;
	v->a[11764] = sym_brace_expression;
	v->a[11765] = sym_string;
	v->a[11766] = sym_number;
	v->a[11767] = sym_simple_expansion;
	v->a[11768] = sym_expansion;
	v->a[11769] = sym_command_substitution;
	v->a[11770] = actions(1285);
	v->a[11771] = 19;
	v->a[11772] = anon_sym_PIPE;
	v->a[11773] = anon_sym_SEMI_SEMI;
	v->a[11774] = anon_sym_PIPE_AMP;
	v->a[11775] = anon_sym_AMP_AMP;
	v->a[11776] = anon_sym_PIPE_PIPE;
	v->a[11777] = anon_sym_LT;
	v->a[11778] = anon_sym_GT;
	v->a[11779] = anon_sym_GT_GT;
	small_parse_table_589(v);
}

void	small_parse_table_589(t_small_parse_table_array *v)
{
	v->a[11780] = anon_sym_AMP_GT;
	v->a[11781] = anon_sym_AMP_GT_GT;
	v->a[11782] = anon_sym_LT_AMP;
	v->a[11783] = anon_sym_GT_AMP;
	v->a[11784] = anon_sym_GT_PIPE;
	v->a[11785] = anon_sym_LT_AMP_DASH;
	v->a[11786] = anon_sym_GT_AMP_DASH;
	v->a[11787] = anon_sym_LT_LT;
	v->a[11788] = anon_sym_LT_LT_DASH;
	v->a[11789] = anon_sym_AMP;
	v->a[11790] = anon_sym_SEMI;
	v->a[11791] = 19;
	v->a[11792] = actions(3);
	v->a[11793] = 1;
	v->a[11794] = sym_comment;
	v->a[11795] = actions(2305);
	v->a[11796] = 1;
	v->a[11797] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11798] = actions(2307);
	v->a[11799] = 1;
	small_parse_table_590(v);
}

/* EOF small_parse_table_117.c */
