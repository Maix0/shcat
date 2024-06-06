/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1392.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6960(t_small_parse_table_array *v)
{
	v->a[139200] = sym_simple_expansion;
	v->a[139201] = sym_expansion;
	v->a[139202] = sym_command_substitution;
	v->a[139203] = 11;
	v->a[139204] = actions(3);
	v->a[139205] = 1;
	v->a[139206] = sym_comment;
	v->a[139207] = actions(7760);
	v->a[139208] = 1;
	v->a[139209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139210] = actions(7766);
	v->a[139211] = 1;
	v->a[139212] = sym_string_content;
	v->a[139213] = actions(7768);
	v->a[139214] = 1;
	v->a[139215] = anon_sym_DOLLAR_LBRACE;
	v->a[139216] = actions(7770);
	v->a[139217] = 1;
	v->a[139218] = anon_sym_DOLLAR_LPAREN;
	v->a[139219] = actions(7772);
	small_parse_table_6961(v);
}

void	small_parse_table_6961(t_small_parse_table_array *v)
{
	v->a[139220] = 1;
	v->a[139221] = anon_sym_BQUOTE;
	v->a[139222] = actions(7774);
	v->a[139223] = 1;
	v->a[139224] = anon_sym_DOLLAR_BQUOTE;
	v->a[139225] = actions(8157);
	v->a[139226] = 1;
	v->a[139227] = anon_sym_DOLLAR;
	v->a[139228] = actions(8159);
	v->a[139229] = 1;
	v->a[139230] = anon_sym_DQUOTE;
	v->a[139231] = state(3129);
	v->a[139232] = 1;
	v->a[139233] = aux_sym_string_repeat1;
	v->a[139234] = state(3218);
	v->a[139235] = 4;
	v->a[139236] = sym_arithmetic_expansion;
	v->a[139237] = sym_simple_expansion;
	v->a[139238] = sym_expansion;
	v->a[139239] = sym_command_substitution;
	small_parse_table_6962(v);
}

void	small_parse_table_6962(t_small_parse_table_array *v)
{
	v->a[139240] = 7;
	v->a[139241] = actions(3);
	v->a[139242] = 1;
	v->a[139243] = sym_comment;
	v->a[139244] = actions(7754);
	v->a[139245] = 1;
	v->a[139246] = aux_sym__simple_variable_name_token1;
	v->a[139247] = actions(7758);
	v->a[139248] = 1;
	v->a[139249] = sym_variable_name;
	v->a[139250] = actions(8161);
	v->a[139251] = 1;
	v->a[139252] = anon_sym_RBRACE3;
	v->a[139253] = state(3614);
	v->a[139254] = 1;
	v->a[139255] = sym__expansion_body;
	v->a[139256] = actions(7756);
	v->a[139257] = 2;
	v->a[139258] = anon_sym_0;
	v->a[139259] = anon_sym__;
	small_parse_table_6963(v);
}

void	small_parse_table_6963(t_small_parse_table_array *v)
{
	v->a[139260] = actions(7750);
	v->a[139261] = 7;
	v->a[139262] = anon_sym_BANG;
	v->a[139263] = anon_sym_DASH;
	v->a[139264] = anon_sym_STAR;
	v->a[139265] = anon_sym_QMARK;
	v->a[139266] = anon_sym_DOLLAR;
	v->a[139267] = anon_sym_POUND;
	v->a[139268] = anon_sym_AT;
	v->a[139269] = 7;
	v->a[139270] = actions(3);
	v->a[139271] = 1;
	v->a[139272] = sym_comment;
	v->a[139273] = actions(7754);
	v->a[139274] = 1;
	v->a[139275] = aux_sym__simple_variable_name_token1;
	v->a[139276] = actions(7758);
	v->a[139277] = 1;
	v->a[139278] = sym_variable_name;
	v->a[139279] = actions(8163);
	small_parse_table_6964(v);
}

void	small_parse_table_6964(t_small_parse_table_array *v)
{
	v->a[139280] = 1;
	v->a[139281] = anon_sym_RBRACE3;
	v->a[139282] = state(3851);
	v->a[139283] = 1;
	v->a[139284] = sym__expansion_body;
	v->a[139285] = actions(7756);
	v->a[139286] = 2;
	v->a[139287] = anon_sym_0;
	v->a[139288] = anon_sym__;
	v->a[139289] = actions(7750);
	v->a[139290] = 7;
	v->a[139291] = anon_sym_BANG;
	v->a[139292] = anon_sym_DASH;
	v->a[139293] = anon_sym_STAR;
	v->a[139294] = anon_sym_QMARK;
	v->a[139295] = anon_sym_DOLLAR;
	v->a[139296] = anon_sym_POUND;
	v->a[139297] = anon_sym_AT;
	v->a[139298] = 11;
	v->a[139299] = actions(3);
	small_parse_table_6965(v);
}

/* EOF small_parse_table_1392.c */
