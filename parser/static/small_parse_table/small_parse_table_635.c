/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_635.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3175(t_small_parse_table_array *v)
{
	v->a[63500] = 1;
	v->a[63501] = anon_sym_BQUOTE;
	v->a[63502] = actions(2789);
	v->a[63503] = 1;
	v->a[63504] = anon_sym_DOLLAR;
	v->a[63505] = actions(2791);
	v->a[63506] = 1;
	v->a[63507] = anon_sym_DQUOTE;
	v->a[63508] = state(1370);
	v->a[63509] = 1;
	v->a[63510] = aux_sym_string_repeat1;
	v->a[63511] = state(1477);
	v->a[63512] = 4;
	v->a[63513] = sym_arithmetic_expansion;
	v->a[63514] = sym_simple_expansion;
	v->a[63515] = sym_expansion;
	v->a[63516] = sym_command_substitution;
	v->a[63517] = 3;
	v->a[63518] = actions(407);
	v->a[63519] = 1;
	small_parse_table_3176(v);
}

void	small_parse_table_3176(t_small_parse_table_array *v)
{
	v->a[63520] = sym_comment;
	v->a[63521] = actions(1871);
	v->a[63522] = 4;
	v->a[63523] = anon_sym_PIPE;
	v->a[63524] = anon_sym_LT;
	v->a[63525] = anon_sym_GT;
	v->a[63526] = anon_sym_LT_LT;
	v->a[63527] = actions(1869);
	v->a[63528] = 8;
	v->a[63529] = anon_sym_AMP_AMP;
	v->a[63530] = anon_sym_PIPE_PIPE;
	v->a[63531] = anon_sym_GT_GT;
	v->a[63532] = anon_sym_LT_AMP;
	v->a[63533] = anon_sym_GT_AMP;
	v->a[63534] = anon_sym_GT_PIPE;
	v->a[63535] = anon_sym_LT_GT;
	v->a[63536] = anon_sym_LT_LT_DASH;
	v->a[63537] = 3;
	v->a[63538] = actions(407);
	v->a[63539] = 1;
	small_parse_table_3177(v);
}

void	small_parse_table_3177(t_small_parse_table_array *v)
{
	v->a[63540] = sym_comment;
	v->a[63541] = actions(1821);
	v->a[63542] = 4;
	v->a[63543] = anon_sym_PIPE;
	v->a[63544] = anon_sym_LT;
	v->a[63545] = anon_sym_GT;
	v->a[63546] = anon_sym_LT_LT;
	v->a[63547] = actions(1819);
	v->a[63548] = 8;
	v->a[63549] = anon_sym_AMP_AMP;
	v->a[63550] = anon_sym_PIPE_PIPE;
	v->a[63551] = anon_sym_GT_GT;
	v->a[63552] = anon_sym_LT_AMP;
	v->a[63553] = anon_sym_GT_AMP;
	v->a[63554] = anon_sym_GT_PIPE;
	v->a[63555] = anon_sym_LT_GT;
	v->a[63556] = anon_sym_LT_LT_DASH;
	v->a[63557] = 8;
	v->a[63558] = actions(3);
	v->a[63559] = 1;
	small_parse_table_3178(v);
}

void	small_parse_table_3178(t_small_parse_table_array *v)
{
	v->a[63560] = sym_comment;
	v->a[63561] = actions(2566);
	v->a[63562] = 1;
	v->a[63563] = anon_sym_POUND;
	v->a[63564] = actions(2568);
	v->a[63565] = 1;
	v->a[63566] = aux_sym__simple_variable_name_token1;
	v->a[63567] = actions(2570);
	v->a[63568] = 1;
	v->a[63569] = anon_sym_0;
	v->a[63570] = actions(2572);
	v->a[63571] = 1;
	v->a[63572] = sym_variable_name;
	v->a[63573] = actions(2793);
	v->a[63574] = 1;
	v->a[63575] = anon_sym_RBRACE;
	v->a[63576] = state(1664);
	v->a[63577] = 1;
	v->a[63578] = sym__expansion_body;
	v->a[63579] = actions(2564);
	small_parse_table_3179(v);
}

void	small_parse_table_3179(t_small_parse_table_array *v)
{
	v->a[63580] = 6;
	v->a[63581] = anon_sym_BANG;
	v->a[63582] = anon_sym_DASH;
	v->a[63583] = anon_sym_STAR;
	v->a[63584] = anon_sym_QMARK;
	v->a[63585] = anon_sym_DOLLAR;
	v->a[63586] = anon_sym_AT;
	v->a[63587] = 10;
	v->a[63588] = actions(3);
	v->a[63589] = 1;
	v->a[63590] = sym_comment;
	v->a[63591] = actions(2548);
	v->a[63592] = 1;
	v->a[63593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63594] = actions(2554);
	v->a[63595] = 1;
	v->a[63596] = sym_string_content;
	v->a[63597] = actions(2556);
	v->a[63598] = 1;
	v->a[63599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3180(v);
}

/* EOF small_parse_table_635.c */
