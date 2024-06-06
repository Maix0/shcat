/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1372.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6860(t_small_parse_table_array *v)
{
	v->a[137200] = actions(7772);
	v->a[137201] = 1;
	v->a[137202] = anon_sym_BQUOTE;
	v->a[137203] = actions(7774);
	v->a[137204] = 1;
	v->a[137205] = anon_sym_DOLLAR_BQUOTE;
	v->a[137206] = actions(8003);
	v->a[137207] = 1;
	v->a[137208] = anon_sym_DOLLAR;
	v->a[137209] = actions(8005);
	v->a[137210] = 1;
	v->a[137211] = anon_sym_DQUOTE;
	v->a[137212] = state(3077);
	v->a[137213] = 1;
	v->a[137214] = aux_sym_string_repeat1;
	v->a[137215] = state(3218);
	v->a[137216] = 4;
	v->a[137217] = sym_arithmetic_expansion;
	v->a[137218] = sym_simple_expansion;
	v->a[137219] = sym_expansion;
	small_parse_table_6861(v);
}

void	small_parse_table_6861(t_small_parse_table_array *v)
{
	v->a[137220] = sym_command_substitution;
	v->a[137221] = 7;
	v->a[137222] = actions(3);
	v->a[137223] = 1;
	v->a[137224] = sym_comment;
	v->a[137225] = actions(7754);
	v->a[137226] = 1;
	v->a[137227] = aux_sym__simple_variable_name_token1;
	v->a[137228] = actions(7758);
	v->a[137229] = 1;
	v->a[137230] = sym_variable_name;
	v->a[137231] = actions(8007);
	v->a[137232] = 1;
	v->a[137233] = anon_sym_RBRACE3;
	v->a[137234] = state(3908);
	v->a[137235] = 1;
	v->a[137236] = sym__expansion_body;
	v->a[137237] = actions(7756);
	v->a[137238] = 2;
	v->a[137239] = anon_sym_0;
	small_parse_table_6862(v);
}

void	small_parse_table_6862(t_small_parse_table_array *v)
{
	v->a[137240] = anon_sym__;
	v->a[137241] = actions(7750);
	v->a[137242] = 7;
	v->a[137243] = anon_sym_BANG;
	v->a[137244] = anon_sym_DASH;
	v->a[137245] = anon_sym_STAR;
	v->a[137246] = anon_sym_QMARK;
	v->a[137247] = anon_sym_DOLLAR;
	v->a[137248] = anon_sym_POUND;
	v->a[137249] = anon_sym_AT;
	v->a[137250] = 11;
	v->a[137251] = actions(3);
	v->a[137252] = 1;
	v->a[137253] = sym_comment;
	v->a[137254] = actions(7760);
	v->a[137255] = 1;
	v->a[137256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137257] = actions(7766);
	v->a[137258] = 1;
	v->a[137259] = sym_string_content;
	small_parse_table_6863(v);
}

void	small_parse_table_6863(t_small_parse_table_array *v)
{
	v->a[137260] = actions(7768);
	v->a[137261] = 1;
	v->a[137262] = anon_sym_DOLLAR_LBRACE;
	v->a[137263] = actions(7770);
	v->a[137264] = 1;
	v->a[137265] = anon_sym_DOLLAR_LPAREN;
	v->a[137266] = actions(7772);
	v->a[137267] = 1;
	v->a[137268] = anon_sym_BQUOTE;
	v->a[137269] = actions(7774);
	v->a[137270] = 1;
	v->a[137271] = anon_sym_DOLLAR_BQUOTE;
	v->a[137272] = actions(8009);
	v->a[137273] = 1;
	v->a[137274] = anon_sym_DOLLAR;
	v->a[137275] = actions(8011);
	v->a[137276] = 1;
	v->a[137277] = anon_sym_DQUOTE;
	v->a[137278] = state(3074);
	v->a[137279] = 1;
	small_parse_table_6864(v);
}

void	small_parse_table_6864(t_small_parse_table_array *v)
{
	v->a[137280] = aux_sym_string_repeat1;
	v->a[137281] = state(3218);
	v->a[137282] = 4;
	v->a[137283] = sym_arithmetic_expansion;
	v->a[137284] = sym_simple_expansion;
	v->a[137285] = sym_expansion;
	v->a[137286] = sym_command_substitution;
	v->a[137287] = 11;
	v->a[137288] = actions(3);
	v->a[137289] = 1;
	v->a[137290] = sym_comment;
	v->a[137291] = actions(7742);
	v->a[137292] = 1;
	v->a[137293] = anon_sym_DQUOTE;
	v->a[137294] = actions(7760);
	v->a[137295] = 1;
	v->a[137296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137297] = actions(7766);
	v->a[137298] = 1;
	v->a[137299] = sym_string_content;
	small_parse_table_6865(v);
}

/* EOF small_parse_table_1372.c */
