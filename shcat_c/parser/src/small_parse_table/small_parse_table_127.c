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
	v->a[12700] = anon_sym_DOLLAR;
	v->a[12701] = actions(3078);
	v->a[12702] = 1;
	v->a[12703] = sym__special_character;
	v->a[12704] = actions(3081);
	v->a[12705] = 1;
	v->a[12706] = anon_sym_DQUOTE;
	v->a[12707] = actions(3084);
	v->a[12708] = 1;
	v->a[12709] = aux_sym_number_token1;
	v->a[12710] = actions(3087);
	v->a[12711] = 1;
	v->a[12712] = aux_sym_number_token2;
	v->a[12713] = actions(3090);
	v->a[12714] = 1;
	v->a[12715] = anon_sym_DOLLAR_LBRACE;
	v->a[12716] = actions(3093);
	v->a[12717] = 1;
	v->a[12718] = anon_sym_DOLLAR_LPAREN;
	v->a[12719] = actions(3096);
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = 1;
	v->a[12721] = anon_sym_BQUOTE;
	v->a[12722] = actions(3099);
	v->a[12723] = 1;
	v->a[12724] = anon_sym_DOLLAR_BQUOTE;
	v->a[12725] = actions(3105);
	v->a[12726] = 1;
	v->a[12727] = sym_test_operator;
	v->a[12728] = actions(3108);
	v->a[12729] = 1;
	v->a[12730] = sym__brace_start;
	v->a[12731] = state(2147);
	v->a[12732] = 1;
	v->a[12733] = aux_sym__literal_repeat1;
	v->a[12734] = actions(2216);
	v->a[12735] = 2;
	v->a[12736] = sym_file_descriptor;
	v->a[12737] = aux_sym_heredoc_redirect_token1;
	v->a[12738] = actions(3069);
	v->a[12739] = 2;
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = anon_sym_LPAREN_LPAREN;
	v->a[12741] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12742] = actions(3102);
	v->a[12743] = 2;
	v->a[12744] = anon_sym_LT_LPAREN;
	v->a[12745] = anon_sym_GT_LPAREN;
	v->a[12746] = state(660);
	v->a[12747] = 2;
	v->a[12748] = sym_concatenation;
	v->a[12749] = aux_sym_for_statement_repeat1;
	v->a[12750] = actions(3066);
	v->a[12751] = 3;
	v->a[12752] = sym_raw_string;
	v->a[12753] = sym_ansi_c_string;
	v->a[12754] = sym_word;
	v->a[12755] = state(1526);
	v->a[12756] = 9;
	v->a[12757] = sym_arithmetic_expansion;
	v->a[12758] = sym_brace_expression;
	v->a[12759] = sym_string;
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = sym_translated_string;
	v->a[12761] = sym_number;
	v->a[12762] = sym_simple_expansion;
	v->a[12763] = sym_expansion;
	v->a[12764] = sym_command_substitution;
	v->a[12765] = sym_process_substitution;
	v->a[12766] = actions(2214);
	v->a[12767] = 21;
	v->a[12768] = anon_sym_SEMI;
	v->a[12769] = anon_sym_PIPE_PIPE;
	v->a[12770] = anon_sym_AMP_AMP;
	v->a[12771] = anon_sym_PIPE;
	v->a[12772] = anon_sym_AMP;
	v->a[12773] = anon_sym_LT;
	v->a[12774] = anon_sym_GT;
	v->a[12775] = anon_sym_LT_LT;
	v->a[12776] = anon_sym_GT_GT;
	v->a[12777] = anon_sym_SEMI_SEMI;
	v->a[12778] = anon_sym_SEMI_AMP;
	v->a[12779] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = anon_sym_PIPE_AMP;
	v->a[12781] = anon_sym_AMP_GT;
	v->a[12782] = anon_sym_AMP_GT_GT;
	v->a[12783] = anon_sym_LT_AMP;
	v->a[12784] = anon_sym_GT_AMP;
	v->a[12785] = anon_sym_GT_PIPE;
	v->a[12786] = anon_sym_LT_AMP_DASH;
	v->a[12787] = anon_sym_GT_AMP_DASH;
	v->a[12788] = anon_sym_LT_LT_DASH;
	v->a[12789] = 36;
	v->a[12790] = actions(71);
	v->a[12791] = 1;
	v->a[12792] = sym_comment;
	v->a[12793] = actions(171);
	v->a[12794] = 1;
	v->a[12795] = anon_sym_RPAREN_RPAREN;
	v->a[12796] = actions(1141);
	v->a[12797] = 1;
	v->a[12798] = anon_sym_DOLLAR_LBRACK;
	v->a[12799] = actions(1145);
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
