/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_127.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_635(t_small_parse_table_array *v)
{
	v->a[12700] = actions(1388);
	v->a[12701] = 31;
	v->a[12702] = anon_sym_PIPE;
	v->a[12703] = anon_sym_SEMI_SEMI;
	v->a[12704] = anon_sym_PIPE_AMP;
	v->a[12705] = anon_sym_AMP_AMP;
	v->a[12706] = anon_sym_PIPE_PIPE;
	v->a[12707] = anon_sym_LT;
	v->a[12708] = anon_sym_GT;
	v->a[12709] = anon_sym_GT_GT;
	v->a[12710] = anon_sym_AMP_GT;
	v->a[12711] = anon_sym_AMP_GT_GT;
	v->a[12712] = anon_sym_LT_AMP;
	v->a[12713] = anon_sym_GT_AMP;
	v->a[12714] = anon_sym_GT_PIPE;
	v->a[12715] = anon_sym_LT_AMP_DASH;
	v->a[12716] = anon_sym_GT_AMP_DASH;
	v->a[12717] = anon_sym_LT_LT;
	v->a[12718] = anon_sym_LT_LT_DASH;
	v->a[12719] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = anon_sym_AMP;
	v->a[12721] = anon_sym_DOLLAR;
	v->a[12722] = sym__special_character;
	v->a[12723] = anon_sym_DQUOTE;
	v->a[12724] = sym_raw_string;
	v->a[12725] = aux_sym_number_token1;
	v->a[12726] = aux_sym_number_token2;
	v->a[12727] = anon_sym_DOLLAR_LBRACE;
	v->a[12728] = anon_sym_DOLLAR_LPAREN;
	v->a[12729] = anon_sym_BQUOTE;
	v->a[12730] = anon_sym_DOLLAR_BQUOTE;
	v->a[12731] = sym_word;
	v->a[12732] = anon_sym_SEMI;
	v->a[12733] = 19;
	v->a[12734] = actions(3);
	v->a[12735] = 1;
	v->a[12736] = sym_comment;
	v->a[12737] = actions(2354);
	v->a[12738] = 1;
	v->a[12739] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = actions(2356);
	v->a[12741] = 1;
	v->a[12742] = anon_sym_DOLLAR;
	v->a[12743] = actions(2358);
	v->a[12744] = 1;
	v->a[12745] = sym__special_character;
	v->a[12746] = actions(2360);
	v->a[12747] = 1;
	v->a[12748] = anon_sym_DQUOTE;
	v->a[12749] = actions(2362);
	v->a[12750] = 1;
	v->a[12751] = aux_sym_number_token1;
	v->a[12752] = actions(2364);
	v->a[12753] = 1;
	v->a[12754] = aux_sym_number_token2;
	v->a[12755] = actions(2366);
	v->a[12756] = 1;
	v->a[12757] = anon_sym_DOLLAR_LBRACE;
	v->a[12758] = actions(2368);
	v->a[12759] = 1;
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = anon_sym_DOLLAR_LPAREN;
	v->a[12761] = actions(2370);
	v->a[12762] = 1;
	v->a[12763] = anon_sym_BQUOTE;
	v->a[12764] = actions(2372);
	v->a[12765] = 1;
	v->a[12766] = anon_sym_DOLLAR_BQUOTE;
	v->a[12767] = actions(2374);
	v->a[12768] = 1;
	v->a[12769] = sym_test_operator;
	v->a[12770] = actions(2376);
	v->a[12771] = 1;
	v->a[12772] = sym__brace_start;
	v->a[12773] = state(1996);
	v->a[12774] = 1;
	v->a[12775] = aux_sym__literal_repeat1;
	v->a[12776] = state(2320);
	v->a[12777] = 1;
	v->a[12778] = sym_concatenation;
	v->a[12779] = actions(2352);
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = 2;
	v->a[12781] = sym_raw_string;
	v->a[12782] = sym_word;
	v->a[12783] = actions(1534);
	v->a[12784] = 3;
	v->a[12785] = sym_file_descriptor;
	v->a[12786] = ts_builtin_sym_end;
	v->a[12787] = aux_sym_heredoc_redirect_token1;
	v->a[12788] = state(2135);
	v->a[12789] = 7;
	v->a[12790] = sym_arithmetic_expansion;
	v->a[12791] = sym_brace_expression;
	v->a[12792] = sym_string;
	v->a[12793] = sym_number;
	v->a[12794] = sym_simple_expansion;
	v->a[12795] = sym_expansion;
	v->a[12796] = sym_command_substitution;
	v->a[12797] = actions(1532);
	v->a[12798] = 19;
	v->a[12799] = anon_sym_PIPE;
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
