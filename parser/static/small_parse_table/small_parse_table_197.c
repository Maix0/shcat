/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_197.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_985(t_small_parse_table_array *v)
{
	v->a[19700] = actions(471);
	v->a[19701] = 1;
	v->a[19702] = sym__bare_dollar;
	v->a[19703] = state(241);
	v->a[19704] = 1;
	v->a[19705] = aux_sym_command_repeat2;
	v->a[19706] = state(627);
	v->a[19707] = 1;
	v->a[19708] = sym_concatenation;
	v->a[19709] = state(1156);
	v->a[19710] = 1;
	v->a[19711] = sym_subshell;
	v->a[19712] = actions(493);
	v->a[19713] = 3;
	v->a[19714] = sym_raw_string;
	v->a[19715] = sym_number;
	v->a[19716] = sym_word;
	v->a[19717] = state(469);
	v->a[19718] = 5;
	v->a[19719] = sym_arithmetic_expansion;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = sym_string;
	v->a[19721] = sym_simple_expansion;
	v->a[19722] = sym_expansion;
	v->a[19723] = sym_command_substitution;
	v->a[19724] = actions(441);
	v->a[19725] = 16;
	v->a[19726] = anon_sym_PIPE;
	v->a[19727] = anon_sym_SEMI_SEMI;
	v->a[19728] = anon_sym_AMP_AMP;
	v->a[19729] = anon_sym_PIPE_PIPE;
	v->a[19730] = anon_sym_LT;
	v->a[19731] = anon_sym_GT;
	v->a[19732] = anon_sym_GT_GT;
	v->a[19733] = anon_sym_LT_AMP;
	v->a[19734] = anon_sym_GT_AMP;
	v->a[19735] = anon_sym_GT_PIPE;
	v->a[19736] = anon_sym_LT_GT;
	v->a[19737] = anon_sym_LT_LT;
	v->a[19738] = anon_sym_LT_LT_DASH;
	v->a[19739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = anon_sym_AMP;
	v->a[19741] = anon_sym_SEMI;
	v->a[19742] = 5;
	v->a[19743] = actions(3);
	v->a[19744] = 1;
	v->a[19745] = sym_comment;
	v->a[19746] = state(185);
	v->a[19747] = 2;
	v->a[19748] = sym_concatenation;
	v->a[19749] = aux_sym_for_statement_repeat1;
	v->a[19750] = actions(495);
	v->a[19751] = 3;
	v->a[19752] = sym_file_descriptor;
	v->a[19753] = sym_variable_name;
	v->a[19754] = ts_builtin_sym_end;
	v->a[19755] = state(397);
	v->a[19756] = 5;
	v->a[19757] = sym_arithmetic_expansion;
	v->a[19758] = sym_string;
	v->a[19759] = sym_simple_expansion;
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = sym_expansion;
	v->a[19761] = sym_command_substitution;
	v->a[19762] = actions(497);
	v->a[19763] = 25;
	v->a[19764] = anon_sym_PIPE;
	v->a[19765] = anon_sym_SEMI_SEMI;
	v->a[19766] = anon_sym_AMP_AMP;
	v->a[19767] = anon_sym_PIPE_PIPE;
	v->a[19768] = anon_sym_LT;
	v->a[19769] = anon_sym_GT;
	v->a[19770] = anon_sym_GT_GT;
	v->a[19771] = anon_sym_LT_AMP;
	v->a[19772] = anon_sym_GT_AMP;
	v->a[19773] = anon_sym_GT_PIPE;
	v->a[19774] = anon_sym_LT_GT;
	v->a[19775] = anon_sym_LT_LT;
	v->a[19776] = anon_sym_LT_LT_DASH;
	v->a[19777] = aux_sym_heredoc_redirect_token1;
	v->a[19778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19779] = anon_sym_AMP;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = anon_sym_DOLLAR;
	v->a[19781] = anon_sym_DQUOTE;
	v->a[19782] = sym_raw_string;
	v->a[19783] = sym_number;
	v->a[19784] = anon_sym_DOLLAR_LBRACE;
	v->a[19785] = anon_sym_DOLLAR_LPAREN;
	v->a[19786] = anon_sym_BQUOTE;
	v->a[19787] = sym_word;
	v->a[19788] = anon_sym_SEMI;
	v->a[19789] = 12;
	v->a[19790] = actions(3);
	v->a[19791] = 1;
	v->a[19792] = sym_comment;
	v->a[19793] = actions(506);
	v->a[19794] = 1;
	v->a[19795] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19796] = actions(509);
	v->a[19797] = 1;
	v->a[19798] = anon_sym_DOLLAR;
	v->a[19799] = actions(512);
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
