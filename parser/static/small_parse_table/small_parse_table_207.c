/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_207.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1035(t_small_parse_table_array *v)
{
	v->a[20700] = sym_raw_string;
	v->a[20701] = aux_sym_number_token1;
	v->a[20702] = aux_sym_number_token2;
	v->a[20703] = anon_sym_DOLLAR_LBRACE;
	v->a[20704] = anon_sym_DOLLAR_LPAREN;
	v->a[20705] = anon_sym_BQUOTE;
	v->a[20706] = anon_sym_DOLLAR_BQUOTE;
	v->a[20707] = sym_word;
	v->a[20708] = anon_sym_SEMI;
	v->a[20709] = 6;
	v->a[20710] = actions(3);
	v->a[20711] = 1;
	v->a[20712] = sym_comment;
	v->a[20713] = actions(2956);
	v->a[20714] = 1;
	v->a[20715] = aux_sym_concatenation_token1;
	v->a[20716] = actions(2958);
	v->a[20717] = 1;
	v->a[20718] = sym__concat;
	v->a[20719] = state(526);
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = 1;
	v->a[20721] = aux_sym_concatenation_repeat1;
	v->a[20722] = actions(2696);
	v->a[20723] = 4;
	v->a[20724] = sym_file_descriptor;
	v->a[20725] = sym_test_operator;
	v->a[20726] = sym__brace_start;
	v->a[20727] = aux_sym_heredoc_redirect_token1;
	v->a[20728] = actions(2694);
	v->a[20729] = 35;
	v->a[20730] = anon_sym_esac;
	v->a[20731] = anon_sym_PIPE;
	v->a[20732] = anon_sym_SEMI_SEMI;
	v->a[20733] = anon_sym_SEMI_AMP;
	v->a[20734] = anon_sym_SEMI_SEMI_AMP;
	v->a[20735] = anon_sym_PIPE_AMP;
	v->a[20736] = anon_sym_AMP_AMP;
	v->a[20737] = anon_sym_PIPE_PIPE;
	v->a[20738] = anon_sym_LT;
	v->a[20739] = anon_sym_GT;
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = anon_sym_GT_GT;
	v->a[20741] = anon_sym_AMP_GT;
	v->a[20742] = anon_sym_AMP_GT_GT;
	v->a[20743] = anon_sym_LT_AMP;
	v->a[20744] = anon_sym_GT_AMP;
	v->a[20745] = anon_sym_GT_PIPE;
	v->a[20746] = anon_sym_LT_AMP_DASH;
	v->a[20747] = anon_sym_GT_AMP_DASH;
	v->a[20748] = anon_sym_LT_LT;
	v->a[20749] = anon_sym_LT_LT_DASH;
	v->a[20750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20751] = anon_sym_AMP;
	v->a[20752] = anon_sym_DOLLAR;
	v->a[20753] = sym__special_character;
	v->a[20754] = anon_sym_DQUOTE;
	v->a[20755] = sym_raw_string;
	v->a[20756] = aux_sym_number_token1;
	v->a[20757] = aux_sym_number_token2;
	v->a[20758] = anon_sym_DOLLAR_LBRACE;
	v->a[20759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = anon_sym_BQUOTE;
	v->a[20761] = anon_sym_DOLLAR_BQUOTE;
	v->a[20762] = aux_sym__simple_variable_name_token1;
	v->a[20763] = sym_word;
	v->a[20764] = anon_sym_SEMI;
	v->a[20765] = 6;
	v->a[20766] = actions(57);
	v->a[20767] = 1;
	v->a[20768] = sym_comment;
	v->a[20769] = state(1662);
	v->a[20770] = 1;
	v->a[20771] = aux_sym__literal_repeat1;
	v->a[20772] = state(546);
	v->a[20773] = 2;
	v->a[20774] = sym_concatenation;
	v->a[20775] = aux_sym_for_statement_repeat1;
	v->a[20776] = state(1461);
	v->a[20777] = 7;
	v->a[20778] = sym_arithmetic_expansion;
	v->a[20779] = sym_brace_expression;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = sym_string;
	v->a[20781] = sym_number;
	v->a[20782] = sym_simple_expansion;
	v->a[20783] = sym_expansion;
	v->a[20784] = sym_command_substitution;
	v->a[20785] = actions(1180);
	v->a[20786] = 12;
	v->a[20787] = anon_sym_PIPE;
	v->a[20788] = anon_sym_LT;
	v->a[20789] = anon_sym_GT;
	v->a[20790] = anon_sym_AMP_GT;
	v->a[20791] = anon_sym_LT_AMP;
	v->a[20792] = anon_sym_GT_AMP;
	v->a[20793] = anon_sym_LT_LT;
	v->a[20794] = anon_sym_DOLLAR;
	v->a[20795] = aux_sym_number_token1;
	v->a[20796] = aux_sym_number_token2;
	v->a[20797] = anon_sym_DOLLAR_LPAREN;
	v->a[20798] = sym_word;
	v->a[20799] = actions(1182);
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
