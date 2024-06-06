/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_645.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3225(t_small_parse_table_array *v)
{
	v->a[64500] = anon_sym_DASH;
	v->a[64501] = actions(4152);
	v->a[64502] = 2;
	v->a[64503] = anon_sym_PLUS_PLUS2;
	v->a[64504] = anon_sym_DASH_DASH2;
	v->a[64505] = actions(4148);
	v->a[64506] = 3;
	v->a[64507] = anon_sym_STAR;
	v->a[64508] = anon_sym_SLASH;
	v->a[64509] = anon_sym_PERCENT;
	v->a[64510] = actions(4136);
	v->a[64511] = 10;
	v->a[64512] = anon_sym_PLUS_EQ;
	v->a[64513] = anon_sym_DASH_EQ;
	v->a[64514] = anon_sym_STAR_EQ;
	v->a[64515] = anon_sym_SLASH_EQ;
	v->a[64516] = anon_sym_PERCENT_EQ;
	v->a[64517] = anon_sym_LT_LT_EQ;
	v->a[64518] = anon_sym_GT_GT_EQ;
	v->a[64519] = anon_sym_AMP_EQ;
	small_parse_table_3226(v);
}

void	small_parse_table_3226(t_small_parse_table_array *v)
{
	v->a[64520] = anon_sym_CARET_EQ;
	v->a[64521] = anon_sym_PIPE_EQ;
	v->a[64522] = 3;
	v->a[64523] = actions(57);
	v->a[64524] = 1;
	v->a[64525] = sym_comment;
	v->a[64526] = actions(3048);
	v->a[64527] = 13;
	v->a[64528] = anon_sym_PIPE;
	v->a[64529] = anon_sym_LT;
	v->a[64530] = anon_sym_GT;
	v->a[64531] = anon_sym_AMP_GT;
	v->a[64532] = anon_sym_LT_AMP;
	v->a[64533] = anon_sym_GT_AMP;
	v->a[64534] = anon_sym_LT_LT;
	v->a[64535] = anon_sym_DOLLAR;
	v->a[64536] = aux_sym_number_token1;
	v->a[64537] = aux_sym_number_token2;
	v->a[64538] = anon_sym_DOLLAR_LPAREN;
	v->a[64539] = anon_sym_BQUOTE;
	small_parse_table_3227(v);
}

void	small_parse_table_3227(t_small_parse_table_array *v)
{
	v->a[64540] = sym_word;
	v->a[64541] = actions(3050);
	v->a[64542] = 22;
	v->a[64543] = sym_file_descriptor;
	v->a[64544] = sym__concat;
	v->a[64545] = sym_test_operator;
	v->a[64546] = sym__bare_dollar;
	v->a[64547] = sym__brace_start;
	v->a[64548] = anon_sym_LPAREN;
	v->a[64549] = anon_sym_PIPE_AMP;
	v->a[64550] = anon_sym_AMP_AMP;
	v->a[64551] = anon_sym_PIPE_PIPE;
	v->a[64552] = anon_sym_GT_GT;
	v->a[64553] = anon_sym_AMP_GT_GT;
	v->a[64554] = anon_sym_GT_PIPE;
	v->a[64555] = anon_sym_LT_AMP_DASH;
	v->a[64556] = anon_sym_GT_AMP_DASH;
	v->a[64557] = anon_sym_LT_LT_DASH;
	v->a[64558] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64559] = aux_sym_concatenation_token1;
	small_parse_table_3228(v);
}

void	small_parse_table_3228(t_small_parse_table_array *v)
{
	v->a[64560] = sym__special_character;
	v->a[64561] = anon_sym_DQUOTE;
	v->a[64562] = sym_raw_string;
	v->a[64563] = anon_sym_DOLLAR_LBRACE;
	v->a[64564] = anon_sym_DOLLAR_BQUOTE;
	v->a[64565] = 19;
	v->a[64566] = actions(57);
	v->a[64567] = 1;
	v->a[64568] = sym_comment;
	v->a[64569] = actions(4120);
	v->a[64570] = 1;
	v->a[64571] = anon_sym_PIPE;
	v->a[64572] = actions(4122);
	v->a[64573] = 1;
	v->a[64574] = anon_sym_AMP_AMP;
	v->a[64575] = actions(4124);
	v->a[64576] = 1;
	v->a[64577] = anon_sym_PIPE_PIPE;
	v->a[64578] = actions(4126);
	v->a[64579] = 1;
	small_parse_table_3229(v);
}

void	small_parse_table_3229(t_small_parse_table_array *v)
{
	v->a[64580] = anon_sym_EQ;
	v->a[64581] = actions(4132);
	v->a[64582] = 1;
	v->a[64583] = anon_sym_COMMA;
	v->a[64584] = actions(4138);
	v->a[64585] = 1;
	v->a[64586] = anon_sym_CARET;
	v->a[64587] = actions(4140);
	v->a[64588] = 1;
	v->a[64589] = anon_sym_AMP;
	v->a[64590] = actions(4150);
	v->a[64591] = 1;
	v->a[64592] = anon_sym_QMARK;
	v->a[64593] = actions(4171);
	v->a[64594] = 1;
	v->a[64595] = anon_sym_RPAREN_RPAREN;
	v->a[64596] = state(3526);
	v->a[64597] = 1;
	v->a[64598] = aux_sym_arithmetic_expansion_repeat1;
	v->a[64599] = actions(4128);
	small_parse_table_3230(v);
}

/* EOF small_parse_table_645.c */
