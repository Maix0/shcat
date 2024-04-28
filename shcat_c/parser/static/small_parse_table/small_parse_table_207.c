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
	v->a[20700] = actions(3);
	v->a[20701] = 1;
	v->a[20702] = sym_comment;
	v->a[20703] = actions(2163);
	v->a[20704] = 1;
	v->a[20705] = anon_sym_DOLLAR_LBRACK;
	v->a[20706] = actions(2166);
	v->a[20707] = 1;
	v->a[20708] = anon_sym_DOLLAR;
	v->a[20709] = actions(2172);
	v->a[20710] = 1;
	v->a[20711] = anon_sym_DQUOTE;
	v->a[20712] = actions(2175);
	v->a[20713] = 1;
	v->a[20714] = aux_sym_number_token1;
	v->a[20715] = actions(2178);
	v->a[20716] = 1;
	v->a[20717] = aux_sym_number_token2;
	v->a[20718] = actions(2181);
	v->a[20719] = 1;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = anon_sym_DOLLAR_LBRACE;
	v->a[20721] = actions(2184);
	v->a[20722] = 1;
	v->a[20723] = anon_sym_DOLLAR_LPAREN;
	v->a[20724] = actions(2187);
	v->a[20725] = 1;
	v->a[20726] = anon_sym_BQUOTE;
	v->a[20727] = actions(2190);
	v->a[20728] = 1;
	v->a[20729] = anon_sym_DOLLAR_BQUOTE;
	v->a[20730] = actions(2205);
	v->a[20731] = 1;
	v->a[20732] = sym__brace_start;
	v->a[20733] = actions(3911);
	v->a[20734] = 1;
	v->a[20735] = sym__special_character;
	v->a[20736] = actions(3914);
	v->a[20737] = 1;
	v->a[20738] = aux_sym__simple_variable_name_token1;
	v->a[20739] = actions(3917);
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = 1;
	v->a[20741] = sym_variable_name;
	v->a[20742] = actions(3920);
	v->a[20743] = 1;
	v->a[20744] = sym_test_operator;
	v->a[20745] = state(1743);
	v->a[20746] = 1;
	v->a[20747] = aux_sym__literal_repeat1;
	v->a[20748] = state(6739);
	v->a[20749] = 1;
	v->a[20750] = sym_subscript;
	v->a[20751] = actions(1704);
	v->a[20752] = 2;
	v->a[20753] = sym_file_descriptor;
	v->a[20754] = aux_sym_heredoc_redirect_token1;
	v->a[20755] = actions(2160);
	v->a[20756] = 2;
	v->a[20757] = anon_sym_LPAREN_LPAREN;
	v->a[20758] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20759] = actions(2193);
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = 2;
	v->a[20761] = anon_sym_LT_LPAREN;
	v->a[20762] = anon_sym_GT_LPAREN;
	v->a[20763] = actions(3908);
	v->a[20764] = 3;
	v->a[20765] = sym_raw_string;
	v->a[20766] = sym_ansi_c_string;
	v->a[20767] = sym_word;
	v->a[20768] = state(746);
	v->a[20769] = 3;
	v->a[20770] = sym_variable_assignment;
	v->a[20771] = sym_concatenation;
	v->a[20772] = aux_sym_declaration_command_repeat1;
	v->a[20773] = state(2330);
	v->a[20774] = 9;
	v->a[20775] = sym_arithmetic_expansion;
	v->a[20776] = sym_brace_expression;
	v->a[20777] = sym_string;
	v->a[20778] = sym_translated_string;
	v->a[20779] = sym_number;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = sym_simple_expansion;
	v->a[20781] = sym_expansion;
	v->a[20782] = sym_command_substitution;
	v->a[20783] = sym_process_substitution;
	v->a[20784] = actions(1702);
	v->a[20785] = 16;
	v->a[20786] = anon_sym_PIPE_PIPE;
	v->a[20787] = anon_sym_AMP_AMP;
	v->a[20788] = anon_sym_PIPE;
	v->a[20789] = anon_sym_LT;
	v->a[20790] = anon_sym_GT;
	v->a[20791] = anon_sym_LT_LT;
	v->a[20792] = anon_sym_GT_GT;
	v->a[20793] = anon_sym_PIPE_AMP;
	v->a[20794] = anon_sym_AMP_GT;
	v->a[20795] = anon_sym_AMP_GT_GT;
	v->a[20796] = anon_sym_LT_AMP;
	v->a[20797] = anon_sym_GT_AMP;
	v->a[20798] = anon_sym_GT_PIPE;
	v->a[20799] = anon_sym_LT_AMP_DASH;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
