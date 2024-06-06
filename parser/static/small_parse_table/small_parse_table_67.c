/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_67.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_335(t_small_parse_table_array *v)
{
	v->a[6700] = anon_sym_BQUOTE;
	v->a[6701] = actions(1678);
	v->a[6702] = 1;
	v->a[6703] = anon_sym_DOLLAR_BQUOTE;
	v->a[6704] = actions(1681);
	v->a[6705] = 1;
	v->a[6706] = sym_test_operator;
	v->a[6707] = actions(1684);
	v->a[6708] = 1;
	v->a[6709] = sym__brace_start;
	v->a[6710] = state(1034);
	v->a[6711] = 1;
	v->a[6712] = aux_sym__literal_repeat1;
	v->a[6713] = actions(1287);
	v->a[6714] = 2;
	v->a[6715] = sym_file_descriptor;
	v->a[6716] = aux_sym_heredoc_redirect_token1;
	v->a[6717] = actions(1648);
	v->a[6718] = 2;
	v->a[6719] = sym_raw_string;
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = sym_word;
	v->a[6721] = state(342);
	v->a[6722] = 2;
	v->a[6723] = sym_concatenation;
	v->a[6724] = aux_sym_for_statement_repeat1;
	v->a[6725] = state(634);
	v->a[6726] = 7;
	v->a[6727] = sym_arithmetic_expansion;
	v->a[6728] = sym_brace_expression;
	v->a[6729] = sym_string;
	v->a[6730] = sym_number;
	v->a[6731] = sym_simple_expansion;
	v->a[6732] = sym_expansion;
	v->a[6733] = sym_command_substitution;
	v->a[6734] = actions(1285);
	v->a[6735] = 22;
	v->a[6736] = anon_sym_esac;
	v->a[6737] = anon_sym_PIPE;
	v->a[6738] = anon_sym_SEMI_SEMI;
	v->a[6739] = anon_sym_SEMI_AMP;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = anon_sym_SEMI_SEMI_AMP;
	v->a[6741] = anon_sym_PIPE_AMP;
	v->a[6742] = anon_sym_AMP_AMP;
	v->a[6743] = anon_sym_PIPE_PIPE;
	v->a[6744] = anon_sym_LT;
	v->a[6745] = anon_sym_GT;
	v->a[6746] = anon_sym_GT_GT;
	v->a[6747] = anon_sym_AMP_GT;
	v->a[6748] = anon_sym_AMP_GT_GT;
	v->a[6749] = anon_sym_LT_AMP;
	v->a[6750] = anon_sym_GT_AMP;
	v->a[6751] = anon_sym_GT_PIPE;
	v->a[6752] = anon_sym_LT_AMP_DASH;
	v->a[6753] = anon_sym_GT_AMP_DASH;
	v->a[6754] = anon_sym_LT_LT;
	v->a[6755] = anon_sym_LT_LT_DASH;
	v->a[6756] = anon_sym_AMP;
	v->a[6757] = anon_sym_SEMI;
	v->a[6758] = 20;
	v->a[6759] = actions(3);
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = 1;
	v->a[6761] = sym_comment;
	v->a[6762] = actions(1009);
	v->a[6763] = 1;
	v->a[6764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6765] = actions(1011);
	v->a[6766] = 1;
	v->a[6767] = anon_sym_DOLLAR;
	v->a[6768] = actions(1015);
	v->a[6769] = 1;
	v->a[6770] = anon_sym_DQUOTE;
	v->a[6771] = actions(1017);
	v->a[6772] = 1;
	v->a[6773] = aux_sym_number_token1;
	v->a[6774] = actions(1019);
	v->a[6775] = 1;
	v->a[6776] = aux_sym_number_token2;
	v->a[6777] = actions(1021);
	v->a[6778] = 1;
	v->a[6779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = actions(1023);
	v->a[6781] = 1;
	v->a[6782] = anon_sym_DOLLAR_LPAREN;
	v->a[6783] = actions(1027);
	v->a[6784] = 1;
	v->a[6785] = anon_sym_DOLLAR_BQUOTE;
	v->a[6786] = actions(1035);
	v->a[6787] = 1;
	v->a[6788] = sym__brace_start;
	v->a[6789] = actions(1564);
	v->a[6790] = 1;
	v->a[6791] = sym__special_character;
	v->a[6792] = actions(1568);
	v->a[6793] = 1;
	v->a[6794] = sym_variable_name;
	v->a[6795] = actions(1570);
	v->a[6796] = 1;
	v->a[6797] = sym_test_operator;
	v->a[6798] = actions(1687);
	v->a[6799] = 1;
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
