/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1362.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6810(t_small_parse_table_array *v)
{
	v->a[136200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136201] = actions(7766);
	v->a[136202] = 1;
	v->a[136203] = sym_string_content;
	v->a[136204] = actions(7768);
	v->a[136205] = 1;
	v->a[136206] = anon_sym_DOLLAR_LBRACE;
	v->a[136207] = actions(7770);
	v->a[136208] = 1;
	v->a[136209] = anon_sym_DOLLAR_LPAREN;
	v->a[136210] = actions(7772);
	v->a[136211] = 1;
	v->a[136212] = anon_sym_BQUOTE;
	v->a[136213] = actions(7774);
	v->a[136214] = 1;
	v->a[136215] = anon_sym_DOLLAR_BQUOTE;
	v->a[136216] = actions(7910);
	v->a[136217] = 1;
	v->a[136218] = anon_sym_DOLLAR;
	v->a[136219] = state(3061);
	small_parse_table_6811(v);
}

void	small_parse_table_6811(t_small_parse_table_array *v)
{
	v->a[136220] = 1;
	v->a[136221] = aux_sym_string_repeat1;
	v->a[136222] = state(3218);
	v->a[136223] = 4;
	v->a[136224] = sym_arithmetic_expansion;
	v->a[136225] = sym_simple_expansion;
	v->a[136226] = sym_expansion;
	v->a[136227] = sym_command_substitution;
	v->a[136228] = 7;
	v->a[136229] = actions(3);
	v->a[136230] = 1;
	v->a[136231] = sym_comment;
	v->a[136232] = actions(7754);
	v->a[136233] = 1;
	v->a[136234] = aux_sym__simple_variable_name_token1;
	v->a[136235] = actions(7758);
	v->a[136236] = 1;
	v->a[136237] = sym_variable_name;
	v->a[136238] = actions(7912);
	v->a[136239] = 1;
	small_parse_table_6812(v);
}

void	small_parse_table_6812(t_small_parse_table_array *v)
{
	v->a[136240] = anon_sym_RBRACE3;
	v->a[136241] = state(3678);
	v->a[136242] = 1;
	v->a[136243] = sym__expansion_body;
	v->a[136244] = actions(7756);
	v->a[136245] = 2;
	v->a[136246] = anon_sym_0;
	v->a[136247] = anon_sym__;
	v->a[136248] = actions(7750);
	v->a[136249] = 7;
	v->a[136250] = anon_sym_BANG;
	v->a[136251] = anon_sym_DASH;
	v->a[136252] = anon_sym_STAR;
	v->a[136253] = anon_sym_QMARK;
	v->a[136254] = anon_sym_DOLLAR;
	v->a[136255] = anon_sym_POUND;
	v->a[136256] = anon_sym_AT;
	v->a[136257] = 11;
	v->a[136258] = actions(3);
	v->a[136259] = 1;
	small_parse_table_6813(v);
}

void	small_parse_table_6813(t_small_parse_table_array *v)
{
	v->a[136260] = sym_comment;
	v->a[136261] = actions(7564);
	v->a[136262] = 1;
	v->a[136263] = anon_sym_DQUOTE;
	v->a[136264] = actions(7760);
	v->a[136265] = 1;
	v->a[136266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136267] = actions(7766);
	v->a[136268] = 1;
	v->a[136269] = sym_string_content;
	v->a[136270] = actions(7768);
	v->a[136271] = 1;
	v->a[136272] = anon_sym_DOLLAR_LBRACE;
	v->a[136273] = actions(7770);
	v->a[136274] = 1;
	v->a[136275] = anon_sym_DOLLAR_LPAREN;
	v->a[136276] = actions(7772);
	v->a[136277] = 1;
	v->a[136278] = anon_sym_BQUOTE;
	v->a[136279] = actions(7774);
	small_parse_table_6814(v);
}

void	small_parse_table_6814(t_small_parse_table_array *v)
{
	v->a[136280] = 1;
	v->a[136281] = anon_sym_DOLLAR_BQUOTE;
	v->a[136282] = actions(7914);
	v->a[136283] = 1;
	v->a[136284] = anon_sym_DOLLAR;
	v->a[136285] = state(3061);
	v->a[136286] = 1;
	v->a[136287] = aux_sym_string_repeat1;
	v->a[136288] = state(3218);
	v->a[136289] = 4;
	v->a[136290] = sym_arithmetic_expansion;
	v->a[136291] = sym_simple_expansion;
	v->a[136292] = sym_expansion;
	v->a[136293] = sym_command_substitution;
	v->a[136294] = 7;
	v->a[136295] = actions(3);
	v->a[136296] = 1;
	v->a[136297] = sym_comment;
	v->a[136298] = actions(7754);
	v->a[136299] = 1;
	small_parse_table_6815(v);
}

/* EOF small_parse_table_1362.c */
