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
	v->a[19700] = state(1230);
	v->a[19701] = 1;
	v->a[19702] = sym_subshell;
	v->a[19703] = state(1231);
	v->a[19704] = 1;
	v->a[19705] = sym_command;
	v->a[19706] = actions(105);
	v->a[19707] = 3;
	v->a[19708] = sym_raw_string;
	v->a[19709] = sym_number;
	v->a[19710] = sym_word;
	v->a[19711] = actions(758);
	v->a[19712] = 3;
	v->a[19713] = anon_sym_LT;
	v->a[19714] = anon_sym_GT;
	v->a[19715] = anon_sym_GT_GT;
	v->a[19716] = state(276);
	v->a[19717] = 5;
	v->a[19718] = sym_arithmetic_expansion;
	v->a[19719] = sym_string;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = sym_simple_expansion;
	v->a[19721] = sym_expansion;
	v->a[19722] = sym_command_substitution;
	v->a[19723] = 11;
	v->a[19724] = actions(3);
	v->a[19725] = 1;
	v->a[19726] = sym_comment;
	v->a[19727] = actions(704);
	v->a[19728] = 1;
	v->a[19729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19730] = actions(706);
	v->a[19731] = 1;
	v->a[19732] = anon_sym_DOLLAR;
	v->a[19733] = actions(708);
	v->a[19734] = 1;
	v->a[19735] = anon_sym_DQUOTE;
	v->a[19736] = actions(710);
	v->a[19737] = 1;
	v->a[19738] = anon_sym_DOLLAR_LBRACE;
	v->a[19739] = actions(712);
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = 1;
	v->a[19741] = anon_sym_DOLLAR_LPAREN;
	v->a[19742] = actions(714);
	v->a[19743] = 1;
	v->a[19744] = anon_sym_BQUOTE;
	v->a[19745] = state(225);
	v->a[19746] = 2;
	v->a[19747] = sym_concatenation;
	v->a[19748] = aux_sym_for_statement_repeat1;
	v->a[19749] = actions(760);
	v->a[19750] = 3;
	v->a[19751] = sym_raw_string;
	v->a[19752] = sym_number;
	v->a[19753] = sym_word;
	v->a[19754] = state(493);
	v->a[19755] = 5;
	v->a[19756] = sym_arithmetic_expansion;
	v->a[19757] = sym_string;
	v->a[19758] = sym_simple_expansion;
	v->a[19759] = sym_expansion;
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = sym_command_substitution;
	v->a[19761] = actions(421);
	v->a[19762] = 10;
	v->a[19763] = anon_sym_PIPE;
	v->a[19764] = anon_sym_SEMI_SEMI;
	v->a[19765] = anon_sym_AMP_AMP;
	v->a[19766] = anon_sym_PIPE_PIPE;
	v->a[19767] = anon_sym_LT;
	v->a[19768] = anon_sym_GT;
	v->a[19769] = anon_sym_GT_GT;
	v->a[19770] = anon_sym_LT_LT;
	v->a[19771] = aux_sym_heredoc_redirect_token1;
	v->a[19772] = anon_sym_SEMI;
	v->a[19773] = 11;
	v->a[19774] = actions(3);
	v->a[19775] = 1;
	v->a[19776] = sym_comment;
	v->a[19777] = actions(607);
	v->a[19778] = 1;
	v->a[19779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = actions(610);
	v->a[19781] = 1;
	v->a[19782] = anon_sym_DOLLAR;
	v->a[19783] = actions(613);
	v->a[19784] = 1;
	v->a[19785] = anon_sym_DQUOTE;
	v->a[19786] = actions(616);
	v->a[19787] = 1;
	v->a[19788] = anon_sym_DOLLAR_LBRACE;
	v->a[19789] = actions(619);
	v->a[19790] = 1;
	v->a[19791] = anon_sym_DOLLAR_LPAREN;
	v->a[19792] = actions(622);
	v->a[19793] = 1;
	v->a[19794] = anon_sym_BQUOTE;
	v->a[19795] = state(225);
	v->a[19796] = 2;
	v->a[19797] = sym_concatenation;
	v->a[19798] = aux_sym_for_statement_repeat1;
	v->a[19799] = actions(818);
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
