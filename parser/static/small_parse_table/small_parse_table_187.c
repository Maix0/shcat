/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_187.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_935(t_small_parse_table_array *v)
{
	v->a[18700] = sym_concatenation;
	v->a[18701] = actions(602);
	v->a[18702] = 3;
	v->a[18703] = sym_raw_string;
	v->a[18704] = sym_number;
	v->a[18705] = sym_word;
	v->a[18706] = state(431);
	v->a[18707] = 5;
	v->a[18708] = sym_arithmetic_expansion;
	v->a[18709] = sym_string;
	v->a[18710] = sym_simple_expansion;
	v->a[18711] = sym_expansion;
	v->a[18712] = sym_command_substitution;
	v->a[18713] = actions(450);
	v->a[18714] = 10;
	v->a[18715] = anon_sym_PIPE;
	v->a[18716] = anon_sym_SEMI_SEMI;
	v->a[18717] = anon_sym_AMP_AMP;
	v->a[18718] = anon_sym_PIPE_PIPE;
	v->a[18719] = anon_sym_LT;
	small_parse_table_936(v);
}

void	small_parse_table_936(t_small_parse_table_array *v)
{
	v->a[18720] = anon_sym_GT;
	v->a[18721] = anon_sym_GT_GT;
	v->a[18722] = anon_sym_LT_LT;
	v->a[18723] = aux_sym_heredoc_redirect_token1;
	v->a[18724] = anon_sym_SEMI;
	v->a[18725] = 19;
	v->a[18726] = actions(3);
	v->a[18727] = 1;
	v->a[18728] = sym_comment;
	v->a[18729] = actions(17);
	v->a[18730] = 1;
	v->a[18731] = anon_sym_LPAREN;
	v->a[18732] = actions(53);
	v->a[18733] = 1;
	v->a[18734] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18735] = actions(55);
	v->a[18736] = 1;
	v->a[18737] = anon_sym_DOLLAR;
	v->a[18738] = actions(57);
	v->a[18739] = 1;
	small_parse_table_937(v);
}

void	small_parse_table_937(t_small_parse_table_array *v)
{
	v->a[18740] = anon_sym_DQUOTE;
	v->a[18741] = actions(61);
	v->a[18742] = 1;
	v->a[18743] = anon_sym_DOLLAR_LBRACE;
	v->a[18744] = actions(63);
	v->a[18745] = 1;
	v->a[18746] = anon_sym_DOLLAR_LPAREN;
	v->a[18747] = actions(65);
	v->a[18748] = 1;
	v->a[18749] = anon_sym_BQUOTE;
	v->a[18750] = actions(339);
	v->a[18751] = 1;
	v->a[18752] = sym_variable_name;
	v->a[18753] = state(252);
	v->a[18754] = 1;
	v->a[18755] = sym_command_name;
	v->a[18756] = state(387);
	v->a[18757] = 1;
	v->a[18758] = aux_sym_command_repeat1;
	v->a[18759] = state(555);
	small_parse_table_938(v);
}

void	small_parse_table_938(t_small_parse_table_array *v)
{
	v->a[18760] = 1;
	v->a[18761] = sym_concatenation;
	v->a[18762] = state(557);
	v->a[18763] = 1;
	v->a[18764] = sym_variable_assignment;
	v->a[18765] = state(1039);
	v->a[18766] = 1;
	v->a[18767] = sym_subshell;
	v->a[18768] = state(1065);
	v->a[18769] = 1;
	v->a[18770] = sym_command;
	v->a[18771] = state(1083);
	v->a[18772] = 1;
	v->a[18773] = sym_file_redirect;
	v->a[18774] = actions(337);
	v->a[18775] = 3;
	v->a[18776] = sym_raw_string;
	v->a[18777] = sym_number;
	v->a[18778] = sym_word;
	v->a[18779] = actions(758);
	small_parse_table_939(v);
}

void	small_parse_table_939(t_small_parse_table_array *v)
{
	v->a[18780] = 3;
	v->a[18781] = anon_sym_LT;
	v->a[18782] = anon_sym_GT;
	v->a[18783] = anon_sym_GT_GT;
	v->a[18784] = state(525);
	v->a[18785] = 5;
	v->a[18786] = sym_arithmetic_expansion;
	v->a[18787] = sym_string;
	v->a[18788] = sym_simple_expansion;
	v->a[18789] = sym_expansion;
	v->a[18790] = sym_command_substitution;
	v->a[18791] = 10;
	v->a[18792] = actions(3);
	v->a[18793] = 1;
	v->a[18794] = sym_comment;
	v->a[18795] = actions(704);
	v->a[18796] = 1;
	v->a[18797] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18798] = actions(706);
	v->a[18799] = 1;
	small_parse_table_940(v);
}

/* EOF small_parse_table_187.c */
