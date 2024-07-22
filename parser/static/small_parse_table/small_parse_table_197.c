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
	v->a[19700] = actions(501);
	v->a[19701] = 1;
	v->a[19702] = sym_comment;
	v->a[19703] = actions(499);
	v->a[19704] = 2;
	v->a[19705] = anon_sym_PLUS_PLUS2;
	v->a[19706] = anon_sym_DASH_DASH2;
	v->a[19707] = actions(495);
	v->a[19708] = 13;
	v->a[19709] = anon_sym_PIPE;
	v->a[19710] = anon_sym_EQ;
	v->a[19711] = anon_sym_LT;
	v->a[19712] = anon_sym_GT;
	v->a[19713] = anon_sym_GT_GT;
	v->a[19714] = anon_sym_LT_LT;
	v->a[19715] = anon_sym_CARET;
	v->a[19716] = anon_sym_AMP;
	v->a[19717] = anon_sym_PLUS;
	v->a[19718] = anon_sym_DASH;
	v->a[19719] = anon_sym_STAR;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = anon_sym_SLASH;
	v->a[19721] = anon_sym_PERCENT;
	v->a[19722] = actions(497);
	v->a[19723] = 19;
	v->a[19724] = anon_sym_AMP_AMP;
	v->a[19725] = anon_sym_PIPE_PIPE;
	v->a[19726] = anon_sym_RPAREN_RPAREN;
	v->a[19727] = anon_sym_PLUS_EQ;
	v->a[19728] = anon_sym_DASH_EQ;
	v->a[19729] = anon_sym_STAR_EQ;
	v->a[19730] = anon_sym_SLASH_EQ;
	v->a[19731] = anon_sym_PERCENT_EQ;
	v->a[19732] = anon_sym_LT_LT_EQ;
	v->a[19733] = anon_sym_GT_GT_EQ;
	v->a[19734] = anon_sym_AMP_EQ;
	v->a[19735] = anon_sym_CARET_EQ;
	v->a[19736] = anon_sym_PIPE_EQ;
	v->a[19737] = anon_sym_EQ_EQ;
	v->a[19738] = anon_sym_BANG_EQ;
	v->a[19739] = anon_sym_LT_EQ;
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = anon_sym_GT_EQ;
	v->a[19741] = anon_sym_QMARK;
	v->a[19742] = anon_sym_COLON;
	v->a[19743] = 14;
	v->a[19744] = actions(3);
	v->a[19745] = 1;
	v->a[19746] = sym_comment;
	v->a[19747] = actions(429);
	v->a[19748] = 1;
	v->a[19749] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19750] = actions(431);
	v->a[19751] = 1;
	v->a[19752] = anon_sym_DOLLAR;
	v->a[19753] = actions(433);
	v->a[19754] = 1;
	v->a[19755] = anon_sym_DQUOTE;
	v->a[19756] = actions(435);
	v->a[19757] = 1;
	v->a[19758] = anon_sym_DOLLAR_LBRACE;
	v->a[19759] = actions(437);
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = 1;
	v->a[19761] = anon_sym_DOLLAR_LPAREN;
	v->a[19762] = actions(439);
	v->a[19763] = 1;
	v->a[19764] = anon_sym_BQUOTE;
	v->a[19765] = actions(441);
	v->a[19766] = 1;
	v->a[19767] = sym__bare_dollar;
	v->a[19768] = actions(505);
	v->a[19769] = 1;
	v->a[19770] = sym_file_descriptor;
	v->a[19771] = state(197);
	v->a[19772] = 1;
	v->a[19773] = aux_sym_command_repeat2;
	v->a[19774] = state(732);
	v->a[19775] = 1;
	v->a[19776] = sym_concatenation;
	v->a[19777] = actions(427);
	v->a[19778] = 3;
	v->a[19779] = sym_raw_string;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = sym_number;
	v->a[19781] = sym_word;
	v->a[19782] = state(401);
	v->a[19783] = 5;
	v->a[19784] = sym_arithmetic_expansion;
	v->a[19785] = sym_string;
	v->a[19786] = sym_simple_expansion;
	v->a[19787] = sym_expansion;
	v->a[19788] = sym_command_substitution;
	v->a[19789] = actions(503);
	v->a[19790] = 16;
	v->a[19791] = anon_sym_esac;
	v->a[19792] = anon_sym_PIPE;
	v->a[19793] = anon_sym_SEMI_SEMI;
	v->a[19794] = anon_sym_AMP_AMP;
	v->a[19795] = anon_sym_PIPE_PIPE;
	v->a[19796] = anon_sym_LT;
	v->a[19797] = anon_sym_GT;
	v->a[19798] = anon_sym_GT_GT;
	v->a[19799] = anon_sym_LT_AMP;
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
