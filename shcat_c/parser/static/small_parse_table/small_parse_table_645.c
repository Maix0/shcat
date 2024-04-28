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
	v->a[64500] = aux_sym__simple_variable_name_token1;
	v->a[64501] = sym_word;
	v->a[64502] = 6;
	v->a[64503] = actions(3);
	v->a[64504] = 1;
	v->a[64505] = sym_comment;
	v->a[64506] = actions(5644);
	v->a[64507] = 1;
	v->a[64508] = aux_sym_concatenation_token1;
	v->a[64509] = actions(5709);
	v->a[64510] = 1;
	v->a[64511] = sym__concat;
	v->a[64512] = state(1412);
	v->a[64513] = 1;
	v->a[64514] = aux_sym_concatenation_repeat1;
	v->a[64515] = actions(1288);
	v->a[64516] = 4;
	v->a[64517] = sym_file_descriptor;
	v->a[64518] = sym_test_operator;
	v->a[64519] = sym__brace_start;
	small_parse_table_3226(v);
}

void	small_parse_table_3226(t_small_parse_table_array *v)
{
	v->a[64520] = aux_sym_heredoc_redirect_token1;
	v->a[64521] = actions(1286);
	v->a[64522] = 39;
	v->a[64523] = anon_sym_LPAREN_LPAREN;
	v->a[64524] = anon_sym_SEMI;
	v->a[64525] = anon_sym_PIPE_PIPE;
	v->a[64526] = anon_sym_AMP_AMP;
	v->a[64527] = anon_sym_PIPE;
	v->a[64528] = anon_sym_AMP;
	v->a[64529] = anon_sym_LT;
	v->a[64530] = anon_sym_GT;
	v->a[64531] = anon_sym_LT_LT;
	v->a[64532] = anon_sym_GT_GT;
	v->a[64533] = anon_sym_SEMI_SEMI;
	v->a[64534] = anon_sym_SEMI_AMP;
	v->a[64535] = anon_sym_SEMI_SEMI_AMP;
	v->a[64536] = anon_sym_PIPE_AMP;
	v->a[64537] = anon_sym_AMP_GT;
	v->a[64538] = anon_sym_AMP_GT_GT;
	v->a[64539] = anon_sym_LT_AMP;
	small_parse_table_3227(v);
}

void	small_parse_table_3227(t_small_parse_table_array *v)
{
	v->a[64540] = anon_sym_GT_AMP;
	v->a[64541] = anon_sym_GT_PIPE;
	v->a[64542] = anon_sym_LT_AMP_DASH;
	v->a[64543] = anon_sym_GT_AMP_DASH;
	v->a[64544] = anon_sym_LT_LT_DASH;
	v->a[64545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64546] = anon_sym_DOLLAR_LBRACK;
	v->a[64547] = anon_sym_DOLLAR;
	v->a[64548] = sym__special_character;
	v->a[64549] = anon_sym_DQUOTE;
	v->a[64550] = sym_raw_string;
	v->a[64551] = sym_ansi_c_string;
	v->a[64552] = aux_sym_number_token1;
	v->a[64553] = aux_sym_number_token2;
	v->a[64554] = anon_sym_DOLLAR_LBRACE;
	v->a[64555] = anon_sym_DOLLAR_LPAREN;
	v->a[64556] = anon_sym_BQUOTE;
	v->a[64557] = anon_sym_DOLLAR_BQUOTE;
	v->a[64558] = anon_sym_LT_LPAREN;
	v->a[64559] = anon_sym_GT_LPAREN;
	small_parse_table_3228(v);
}

void	small_parse_table_3228(t_small_parse_table_array *v)
{
	v->a[64560] = aux_sym__simple_variable_name_token1;
	v->a[64561] = sym_word;
	v->a[64562] = 3;
	v->a[64563] = actions(3);
	v->a[64564] = 1;
	v->a[64565] = sym_comment;
	v->a[64566] = actions(1350);
	v->a[64567] = 6;
	v->a[64568] = sym_file_descriptor;
	v->a[64569] = sym__concat;
	v->a[64570] = sym_variable_name;
	v->a[64571] = sym_test_operator;
	v->a[64572] = sym__brace_start;
	v->a[64573] = aux_sym_heredoc_redirect_token1;
	v->a[64574] = actions(1348);
	v->a[64575] = 40;
	v->a[64576] = anon_sym_LPAREN_LPAREN;
	v->a[64577] = anon_sym_SEMI;
	v->a[64578] = anon_sym_PIPE_PIPE;
	v->a[64579] = anon_sym_AMP_AMP;
	small_parse_table_3229(v);
}

void	small_parse_table_3229(t_small_parse_table_array *v)
{
	v->a[64580] = anon_sym_PIPE;
	v->a[64581] = anon_sym_AMP;
	v->a[64582] = anon_sym_LT;
	v->a[64583] = anon_sym_GT;
	v->a[64584] = anon_sym_LT_LT;
	v->a[64585] = anon_sym_GT_GT;
	v->a[64586] = anon_sym_SEMI_SEMI;
	v->a[64587] = anon_sym_SEMI_AMP;
	v->a[64588] = anon_sym_SEMI_SEMI_AMP;
	v->a[64589] = anon_sym_PIPE_AMP;
	v->a[64590] = anon_sym_AMP_GT;
	v->a[64591] = anon_sym_AMP_GT_GT;
	v->a[64592] = anon_sym_LT_AMP;
	v->a[64593] = anon_sym_GT_AMP;
	v->a[64594] = anon_sym_GT_PIPE;
	v->a[64595] = anon_sym_LT_AMP_DASH;
	v->a[64596] = anon_sym_GT_AMP_DASH;
	v->a[64597] = anon_sym_LT_LT_DASH;
	v->a[64598] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64599] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_3230(v);
}

/* EOF small_parse_table_645.c */
