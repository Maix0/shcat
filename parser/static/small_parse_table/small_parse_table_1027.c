/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1027.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5135(t_small_parse_table_array *v)
{
	v->a[102700] = state(2122);
	v->a[102701] = 1;
	v->a[102702] = aux_sym__heredoc_command;
	v->a[102703] = state(2852);
	v->a[102704] = 1;
	v->a[102705] = aux_sym__literal_repeat1;
	v->a[102706] = state(2882);
	v->a[102707] = 1;
	v->a[102708] = sym_concatenation;
	v->a[102709] = actions(2446);
	v->a[102710] = 2;
	v->a[102711] = sym_raw_string;
	v->a[102712] = sym_word;
	v->a[102713] = state(2716);
	v->a[102714] = 7;
	v->a[102715] = sym_arithmetic_expansion;
	v->a[102716] = sym_brace_expression;
	v->a[102717] = sym_string;
	v->a[102718] = sym_number;
	v->a[102719] = sym_simple_expansion;
	small_parse_table_5136(v);
}

void	small_parse_table_5136(t_small_parse_table_array *v)
{
	v->a[102720] = sym_expansion;
	v->a[102721] = sym_command_substitution;
	v->a[102722] = 6;
	v->a[102723] = actions(3);
	v->a[102724] = 1;
	v->a[102725] = sym_comment;
	v->a[102726] = actions(5267);
	v->a[102727] = 1;
	v->a[102728] = aux_sym_concatenation_token1;
	v->a[102729] = actions(5929);
	v->a[102730] = 1;
	v->a[102731] = sym__concat;
	v->a[102732] = state(1910);
	v->a[102733] = 1;
	v->a[102734] = aux_sym_concatenation_repeat1;
	v->a[102735] = actions(2690);
	v->a[102736] = 3;
	v->a[102737] = sym_file_descriptor;
	v->a[102738] = ts_builtin_sym_end;
	v->a[102739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5137(v);
}

void	small_parse_table_5137(t_small_parse_table_array *v)
{
	v->a[102740] = actions(2688);
	v->a[102741] = 19;
	v->a[102742] = anon_sym_PIPE;
	v->a[102743] = anon_sym_SEMI_SEMI;
	v->a[102744] = anon_sym_PIPE_AMP;
	v->a[102745] = anon_sym_AMP_AMP;
	v->a[102746] = anon_sym_PIPE_PIPE;
	v->a[102747] = anon_sym_LT;
	v->a[102748] = anon_sym_GT;
	v->a[102749] = anon_sym_GT_GT;
	v->a[102750] = anon_sym_AMP_GT;
	v->a[102751] = anon_sym_AMP_GT_GT;
	v->a[102752] = anon_sym_LT_AMP;
	v->a[102753] = anon_sym_GT_AMP;
	v->a[102754] = anon_sym_GT_PIPE;
	v->a[102755] = anon_sym_LT_AMP_DASH;
	v->a[102756] = anon_sym_GT_AMP_DASH;
	v->a[102757] = anon_sym_LT_LT;
	v->a[102758] = anon_sym_LT_LT_DASH;
	v->a[102759] = anon_sym_AMP;
	small_parse_table_5138(v);
}

void	small_parse_table_5138(t_small_parse_table_array *v)
{
	v->a[102760] = anon_sym_SEMI;
	v->a[102761] = 5;
	v->a[102762] = actions(3);
	v->a[102763] = 1;
	v->a[102764] = sym_comment;
	v->a[102765] = actions(5931);
	v->a[102766] = 1;
	v->a[102767] = sym_variable_name;
	v->a[102768] = actions(5145);
	v->a[102769] = 2;
	v->a[102770] = sym_file_descriptor;
	v->a[102771] = aux_sym_heredoc_redirect_token1;
	v->a[102772] = state(2103);
	v->a[102773] = 2;
	v->a[102774] = sym_variable_assignment;
	v->a[102775] = aux_sym_variable_assignments_repeat1;
	v->a[102776] = actions(5143);
	v->a[102777] = 20;
	v->a[102778] = anon_sym_PIPE;
	v->a[102779] = anon_sym_SEMI_SEMI;
	small_parse_table_5139(v);
}

void	small_parse_table_5139(t_small_parse_table_array *v)
{
	v->a[102780] = anon_sym_PIPE_AMP;
	v->a[102781] = anon_sym_AMP_AMP;
	v->a[102782] = anon_sym_PIPE_PIPE;
	v->a[102783] = anon_sym_LT;
	v->a[102784] = anon_sym_GT;
	v->a[102785] = anon_sym_GT_GT;
	v->a[102786] = anon_sym_AMP_GT;
	v->a[102787] = anon_sym_AMP_GT_GT;
	v->a[102788] = anon_sym_LT_AMP;
	v->a[102789] = anon_sym_GT_AMP;
	v->a[102790] = anon_sym_GT_PIPE;
	v->a[102791] = anon_sym_LT_AMP_DASH;
	v->a[102792] = anon_sym_GT_AMP_DASH;
	v->a[102793] = anon_sym_LT_LT;
	v->a[102794] = anon_sym_LT_LT_DASH;
	v->a[102795] = anon_sym_AMP;
	v->a[102796] = anon_sym_BQUOTE;
	v->a[102797] = anon_sym_SEMI;
	v->a[102798] = 8;
	v->a[102799] = actions(3);
	small_parse_table_5140(v);
}

/* EOF small_parse_table_1027.c */
