/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1355.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6775(t_small_parse_table_array *v)
{
	v->a[135500] = actions(3);
	v->a[135501] = 1;
	v->a[135502] = sym_comment;
	v->a[135503] = actions(7760);
	v->a[135504] = 1;
	v->a[135505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135506] = actions(7766);
	v->a[135507] = 1;
	v->a[135508] = sym_string_content;
	v->a[135509] = actions(7768);
	v->a[135510] = 1;
	v->a[135511] = anon_sym_DOLLAR_LBRACE;
	v->a[135512] = actions(7770);
	v->a[135513] = 1;
	v->a[135514] = anon_sym_DOLLAR_LPAREN;
	v->a[135515] = actions(7772);
	v->a[135516] = 1;
	v->a[135517] = anon_sym_BQUOTE;
	v->a[135518] = actions(7774);
	v->a[135519] = 1;
	small_parse_table_6776(v);
}

void	small_parse_table_6776(t_small_parse_table_array *v)
{
	v->a[135520] = anon_sym_DOLLAR_BQUOTE;
	v->a[135521] = actions(7852);
	v->a[135522] = 1;
	v->a[135523] = anon_sym_DOLLAR;
	v->a[135524] = actions(7854);
	v->a[135525] = 1;
	v->a[135526] = anon_sym_DQUOTE;
	v->a[135527] = state(3015);
	v->a[135528] = 1;
	v->a[135529] = aux_sym_string_repeat1;
	v->a[135530] = state(3218);
	v->a[135531] = 4;
	v->a[135532] = sym_arithmetic_expansion;
	v->a[135533] = sym_simple_expansion;
	v->a[135534] = sym_expansion;
	v->a[135535] = sym_command_substitution;
	v->a[135536] = 7;
	v->a[135537] = actions(3);
	v->a[135538] = 1;
	v->a[135539] = sym_comment;
	small_parse_table_6777(v);
}

void	small_parse_table_6777(t_small_parse_table_array *v)
{
	v->a[135540] = actions(7754);
	v->a[135541] = 1;
	v->a[135542] = aux_sym__simple_variable_name_token1;
	v->a[135543] = actions(7758);
	v->a[135544] = 1;
	v->a[135545] = sym_variable_name;
	v->a[135546] = actions(7856);
	v->a[135547] = 1;
	v->a[135548] = anon_sym_RBRACE3;
	v->a[135549] = state(3874);
	v->a[135550] = 1;
	v->a[135551] = sym__expansion_body;
	v->a[135552] = actions(7756);
	v->a[135553] = 2;
	v->a[135554] = anon_sym_0;
	v->a[135555] = anon_sym__;
	v->a[135556] = actions(7750);
	v->a[135557] = 7;
	v->a[135558] = anon_sym_BANG;
	v->a[135559] = anon_sym_DASH;
	small_parse_table_6778(v);
}

void	small_parse_table_6778(t_small_parse_table_array *v)
{
	v->a[135560] = anon_sym_STAR;
	v->a[135561] = anon_sym_QMARK;
	v->a[135562] = anon_sym_DOLLAR;
	v->a[135563] = anon_sym_POUND;
	v->a[135564] = anon_sym_AT;
	v->a[135565] = 11;
	v->a[135566] = actions(3);
	v->a[135567] = 1;
	v->a[135568] = sym_comment;
	v->a[135569] = actions(7760);
	v->a[135570] = 1;
	v->a[135571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135572] = actions(7766);
	v->a[135573] = 1;
	v->a[135574] = sym_string_content;
	v->a[135575] = actions(7768);
	v->a[135576] = 1;
	v->a[135577] = anon_sym_DOLLAR_LBRACE;
	v->a[135578] = actions(7770);
	v->a[135579] = 1;
	small_parse_table_6779(v);
}

void	small_parse_table_6779(t_small_parse_table_array *v)
{
	v->a[135580] = anon_sym_DOLLAR_LPAREN;
	v->a[135581] = actions(7772);
	v->a[135582] = 1;
	v->a[135583] = anon_sym_BQUOTE;
	v->a[135584] = actions(7774);
	v->a[135585] = 1;
	v->a[135586] = anon_sym_DOLLAR_BQUOTE;
	v->a[135587] = actions(7858);
	v->a[135588] = 1;
	v->a[135589] = anon_sym_DOLLAR;
	v->a[135590] = actions(7860);
	v->a[135591] = 1;
	v->a[135592] = anon_sym_DQUOTE;
	v->a[135593] = state(3017);
	v->a[135594] = 1;
	v->a[135595] = aux_sym_string_repeat1;
	v->a[135596] = state(3218);
	v->a[135597] = 4;
	v->a[135598] = sym_arithmetic_expansion;
	v->a[135599] = sym_simple_expansion;
	small_parse_table_6780(v);
}

/* EOF small_parse_table_1355.c */
