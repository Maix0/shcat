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
	v->a[19700] = anon_sym_AMP_EQ;
	v->a[19701] = anon_sym_CARET_EQ;
	v->a[19702] = anon_sym_PIPE_EQ;
	v->a[19703] = anon_sym_EQ_EQ;
	v->a[19704] = anon_sym_BANG_EQ;
	v->a[19705] = anon_sym_LT_EQ;
	v->a[19706] = anon_sym_GT_EQ;
	v->a[19707] = anon_sym_QMARK;
	v->a[19708] = 9;
	v->a[19709] = actions(407);
	v->a[19710] = 1;
	v->a[19711] = sym_comment;
	v->a[19712] = actions(577);
	v->a[19713] = 2;
	v->a[19714] = anon_sym_LT;
	v->a[19715] = anon_sym_GT;
	v->a[19716] = actions(579);
	v->a[19717] = 2;
	v->a[19718] = anon_sym_GT_GT;
	v->a[19719] = anon_sym_LT_LT;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = actions(589);
	v->a[19721] = 2;
	v->a[19722] = anon_sym_LT_EQ;
	v->a[19723] = anon_sym_GT_EQ;
	v->a[19724] = actions(591);
	v->a[19725] = 2;
	v->a[19726] = anon_sym_PLUS;
	v->a[19727] = anon_sym_DASH;
	v->a[19728] = actions(597);
	v->a[19729] = 2;
	v->a[19730] = anon_sym_PLUS_PLUS2;
	v->a[19731] = anon_sym_DASH_DASH2;
	v->a[19732] = actions(593);
	v->a[19733] = 3;
	v->a[19734] = anon_sym_STAR;
	v->a[19735] = anon_sym_SLASH;
	v->a[19736] = anon_sym_PERCENT;
	v->a[19737] = actions(459);
	v->a[19738] = 4;
	v->a[19739] = anon_sym_PIPE;
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = anon_sym_EQ;
	v->a[19741] = anon_sym_CARET;
	v->a[19742] = anon_sym_AMP;
	v->a[19743] = actions(461);
	v->a[19744] = 16;
	v->a[19745] = anon_sym_RPAREN;
	v->a[19746] = anon_sym_AMP_AMP;
	v->a[19747] = anon_sym_PIPE_PIPE;
	v->a[19748] = anon_sym_PLUS_EQ;
	v->a[19749] = anon_sym_DASH_EQ;
	v->a[19750] = anon_sym_STAR_EQ;
	v->a[19751] = anon_sym_SLASH_EQ;
	v->a[19752] = anon_sym_PERCENT_EQ;
	v->a[19753] = anon_sym_LT_LT_EQ;
	v->a[19754] = anon_sym_GT_GT_EQ;
	v->a[19755] = anon_sym_AMP_EQ;
	v->a[19756] = anon_sym_CARET_EQ;
	v->a[19757] = anon_sym_PIPE_EQ;
	v->a[19758] = anon_sym_EQ_EQ;
	v->a[19759] = anon_sym_BANG_EQ;
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = anon_sym_QMARK;
	v->a[19761] = 14;
	v->a[19762] = actions(3);
	v->a[19763] = 1;
	v->a[19764] = sym_comment;
	v->a[19765] = actions(25);
	v->a[19766] = 1;
	v->a[19767] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19768] = actions(27);
	v->a[19769] = 1;
	v->a[19770] = anon_sym_DOLLAR;
	v->a[19771] = actions(29);
	v->a[19772] = 1;
	v->a[19773] = anon_sym_DQUOTE;
	v->a[19774] = actions(33);
	v->a[19775] = 1;
	v->a[19776] = anon_sym_DOLLAR_LBRACE;
	v->a[19777] = actions(35);
	v->a[19778] = 1;
	v->a[19779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = actions(37);
	v->a[19781] = 1;
	v->a[19782] = anon_sym_BQUOTE;
	v->a[19783] = actions(605);
	v->a[19784] = 1;
	v->a[19785] = sym__bare_dollar;
	v->a[19786] = actions(640);
	v->a[19787] = 1;
	v->a[19788] = ts_builtin_sym_end;
	v->a[19789] = state(220);
	v->a[19790] = 1;
	v->a[19791] = aux_sym_command_repeat2;
	v->a[19792] = state(626);
	v->a[19793] = 1;
	v->a[19794] = sym_concatenation;
	v->a[19795] = actions(603);
	v->a[19796] = 3;
	v->a[19797] = sym_raw_string;
	v->a[19798] = sym_number;
	v->a[19799] = sym_word;
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
