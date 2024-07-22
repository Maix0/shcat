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
	v->a[18700] = 16;
	v->a[18701] = actions(3);
	v->a[18702] = 1;
	v->a[18703] = sym_comment;
	v->a[18704] = actions(17);
	v->a[18705] = 1;
	v->a[18706] = anon_sym_LPAREN;
	v->a[18707] = actions(445);
	v->a[18708] = 1;
	v->a[18709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18710] = actions(447);
	v->a[18711] = 1;
	v->a[18712] = anon_sym_DOLLAR;
	v->a[18713] = actions(449);
	v->a[18714] = 1;
	v->a[18715] = anon_sym_DQUOTE;
	v->a[18716] = actions(451);
	v->a[18717] = 1;
	v->a[18718] = anon_sym_DOLLAR_LBRACE;
	v->a[18719] = actions(453);
	small_parse_table_936(v);
}

void	small_parse_table_936(t_small_parse_table_array *v)
{
	v->a[18720] = 1;
	v->a[18721] = anon_sym_DOLLAR_LPAREN;
	v->a[18722] = actions(455);
	v->a[18723] = 1;
	v->a[18724] = anon_sym_BQUOTE;
	v->a[18725] = actions(457);
	v->a[18726] = 1;
	v->a[18727] = sym__bare_dollar;
	v->a[18728] = state(196);
	v->a[18729] = 1;
	v->a[18730] = aux_sym_command_repeat2;
	v->a[18731] = state(694);
	v->a[18732] = 1;
	v->a[18733] = sym_concatenation;
	v->a[18734] = state(1181);
	v->a[18735] = 1;
	v->a[18736] = sym_subshell;
	v->a[18737] = actions(417);
	v->a[18738] = 2;
	v->a[18739] = sym_file_descriptor;
	small_parse_table_937(v);
}

void	small_parse_table_937(t_small_parse_table_array *v)
{
	v->a[18740] = ts_builtin_sym_end;
	v->a[18741] = actions(443);
	v->a[18742] = 3;
	v->a[18743] = sym_raw_string;
	v->a[18744] = sym_number;
	v->a[18745] = sym_word;
	v->a[18746] = state(418);
	v->a[18747] = 5;
	v->a[18748] = sym_arithmetic_expansion;
	v->a[18749] = sym_string;
	v->a[18750] = sym_simple_expansion;
	v->a[18751] = sym_expansion;
	v->a[18752] = sym_command_substitution;
	v->a[18753] = actions(403);
	v->a[18754] = 15;
	v->a[18755] = anon_sym_PIPE;
	v->a[18756] = anon_sym_SEMI_SEMI;
	v->a[18757] = anon_sym_AMP_AMP;
	v->a[18758] = anon_sym_PIPE_PIPE;
	v->a[18759] = anon_sym_LT;
	small_parse_table_938(v);
}

void	small_parse_table_938(t_small_parse_table_array *v)
{
	v->a[18760] = anon_sym_GT;
	v->a[18761] = anon_sym_GT_GT;
	v->a[18762] = anon_sym_LT_AMP;
	v->a[18763] = anon_sym_GT_AMP;
	v->a[18764] = anon_sym_GT_PIPE;
	v->a[18765] = anon_sym_LT_GT;
	v->a[18766] = anon_sym_LT_LT;
	v->a[18767] = anon_sym_LT_LT_DASH;
	v->a[18768] = aux_sym_heredoc_redirect_token1;
	v->a[18769] = anon_sym_SEMI;
	v->a[18770] = 6;
	v->a[18771] = actions(3);
	v->a[18772] = 1;
	v->a[18773] = sym_comment;
	v->a[18774] = actions(463);
	v->a[18775] = 1;
	v->a[18776] = sym_variable_name;
	v->a[18777] = actions(367);
	v->a[18778] = 2;
	v->a[18779] = sym_file_descriptor;
	small_parse_table_939(v);
}

void	small_parse_table_939(t_small_parse_table_array *v)
{
	v->a[18780] = ts_builtin_sym_end;
	v->a[18781] = actions(461);
	v->a[18782] = 2;
	v->a[18783] = aux_sym__simple_variable_name_token1;
	v->a[18784] = aux_sym__multiline_variable_name_token1;
	v->a[18785] = actions(459);
	v->a[18786] = 8;
	v->a[18787] = anon_sym_BANG;
	v->a[18788] = anon_sym_DASH;
	v->a[18789] = anon_sym_STAR;
	v->a[18790] = anon_sym_QMARK;
	v->a[18791] = anon_sym_DOLLAR;
	v->a[18792] = anon_sym_POUND;
	v->a[18793] = anon_sym_AT;
	v->a[18794] = anon_sym_0;
	v->a[18795] = actions(361);
	v->a[18796] = 23;
	v->a[18797] = anon_sym_PIPE;
	v->a[18798] = anon_sym_SEMI_SEMI;
	v->a[18799] = anon_sym_AMP_AMP;
	small_parse_table_940(v);
}

/* EOF small_parse_table_187.c */
