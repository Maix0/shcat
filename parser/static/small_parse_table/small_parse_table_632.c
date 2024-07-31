/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_632.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3160(t_small_parse_table_array *v)
{
	v->a[63200] = sym_comment;
	v->a[63201] = actions(2566);
	v->a[63202] = 1;
	v->a[63203] = anon_sym_POUND;
	v->a[63204] = actions(2568);
	v->a[63205] = 1;
	v->a[63206] = aux_sym__simple_variable_name_token1;
	v->a[63207] = actions(2570);
	v->a[63208] = 1;
	v->a[63209] = anon_sym_0;
	v->a[63210] = actions(2572);
	v->a[63211] = 1;
	v->a[63212] = sym_variable_name;
	v->a[63213] = actions(2767);
	v->a[63214] = 1;
	v->a[63215] = anon_sym_RBRACE;
	v->a[63216] = state(1762);
	v->a[63217] = 1;
	v->a[63218] = sym__expansion_body;
	v->a[63219] = actions(2564);
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = 6;
	v->a[63221] = anon_sym_BANG;
	v->a[63222] = anon_sym_DASH;
	v->a[63223] = anon_sym_STAR;
	v->a[63224] = anon_sym_QMARK;
	v->a[63225] = anon_sym_DOLLAR;
	v->a[63226] = anon_sym_AT;
	v->a[63227] = 3;
	v->a[63228] = actions(407);
	v->a[63229] = 1;
	v->a[63230] = sym_comment;
	v->a[63231] = actions(1883);
	v->a[63232] = 4;
	v->a[63233] = anon_sym_PIPE;
	v->a[63234] = anon_sym_LT;
	v->a[63235] = anon_sym_GT;
	v->a[63236] = anon_sym_LT_LT;
	v->a[63237] = actions(1881);
	v->a[63238] = 8;
	v->a[63239] = anon_sym_AMP_AMP;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = anon_sym_PIPE_PIPE;
	v->a[63241] = anon_sym_GT_GT;
	v->a[63242] = anon_sym_LT_AMP;
	v->a[63243] = anon_sym_GT_AMP;
	v->a[63244] = anon_sym_GT_PIPE;
	v->a[63245] = anon_sym_LT_GT;
	v->a[63246] = anon_sym_LT_LT_DASH;
	v->a[63247] = 10;
	v->a[63248] = actions(3);
	v->a[63249] = 1;
	v->a[63250] = sym_comment;
	v->a[63251] = actions(2548);
	v->a[63252] = 1;
	v->a[63253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63254] = actions(2554);
	v->a[63255] = 1;
	v->a[63256] = sym_string_content;
	v->a[63257] = actions(2556);
	v->a[63258] = 1;
	v->a[63259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = actions(2558);
	v->a[63261] = 1;
	v->a[63262] = anon_sym_DOLLAR_LPAREN;
	v->a[63263] = actions(2560);
	v->a[63264] = 1;
	v->a[63265] = anon_sym_BQUOTE;
	v->a[63266] = actions(2769);
	v->a[63267] = 1;
	v->a[63268] = anon_sym_DOLLAR;
	v->a[63269] = actions(2771);
	v->a[63270] = 1;
	v->a[63271] = anon_sym_DQUOTE;
	v->a[63272] = state(1378);
	v->a[63273] = 1;
	v->a[63274] = aux_sym_string_repeat1;
	v->a[63275] = state(1477);
	v->a[63276] = 4;
	v->a[63277] = sym_arithmetic_expansion;
	v->a[63278] = sym_simple_expansion;
	v->a[63279] = sym_expansion;
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = sym_command_substitution;
	v->a[63281] = 8;
	v->a[63282] = actions(3);
	v->a[63283] = 1;
	v->a[63284] = sym_comment;
	v->a[63285] = actions(2566);
	v->a[63286] = 1;
	v->a[63287] = anon_sym_POUND;
	v->a[63288] = actions(2568);
	v->a[63289] = 1;
	v->a[63290] = aux_sym__simple_variable_name_token1;
	v->a[63291] = actions(2570);
	v->a[63292] = 1;
	v->a[63293] = anon_sym_0;
	v->a[63294] = actions(2572);
	v->a[63295] = 1;
	v->a[63296] = sym_variable_name;
	v->a[63297] = actions(2773);
	v->a[63298] = 1;
	v->a[63299] = anon_sym_RBRACE;
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */
