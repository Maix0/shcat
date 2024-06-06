/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1255.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6275(t_small_parse_table_array *v)
{
	v->a[125500] = sym_word;
	v->a[125501] = anon_sym_SEMI;
	v->a[125502] = 5;
	v->a[125503] = actions(57);
	v->a[125504] = 1;
	v->a[125505] = sym_comment;
	v->a[125506] = actions(7183);
	v->a[125507] = 1;
	v->a[125508] = sym__special_character;
	v->a[125509] = state(2651);
	v->a[125510] = 1;
	v->a[125511] = aux_sym__literal_repeat1;
	v->a[125512] = actions(3250);
	v->a[125513] = 7;
	v->a[125514] = anon_sym_PIPE;
	v->a[125515] = anon_sym_LT;
	v->a[125516] = anon_sym_GT;
	v->a[125517] = anon_sym_AMP_GT;
	v->a[125518] = anon_sym_LT_AMP;
	v->a[125519] = anon_sym_GT_AMP;
	small_parse_table_6276(v);
}

void	small_parse_table_6276(t_small_parse_table_array *v)
{
	v->a[125520] = anon_sym_LT_LT;
	v->a[125521] = actions(3252);
	v->a[125522] = 11;
	v->a[125523] = sym_file_descriptor;
	v->a[125524] = sym_variable_name;
	v->a[125525] = anon_sym_PIPE_AMP;
	v->a[125526] = anon_sym_AMP_AMP;
	v->a[125527] = anon_sym_PIPE_PIPE;
	v->a[125528] = anon_sym_GT_GT;
	v->a[125529] = anon_sym_AMP_GT_GT;
	v->a[125530] = anon_sym_GT_PIPE;
	v->a[125531] = anon_sym_LT_AMP_DASH;
	v->a[125532] = anon_sym_GT_AMP_DASH;
	v->a[125533] = anon_sym_LT_LT_DASH;
	v->a[125534] = 7;
	v->a[125535] = actions(3);
	v->a[125536] = 1;
	v->a[125537] = sym_comment;
	v->a[125538] = actions(5281);
	v->a[125539] = 1;
	small_parse_table_6277(v);
}

void	small_parse_table_6277(t_small_parse_table_array *v)
{
	v->a[125540] = aux_sym_heredoc_redirect_token1;
	v->a[125541] = actions(7191);
	v->a[125542] = 1;
	v->a[125543] = sym_file_descriptor;
	v->a[125544] = actions(7188);
	v->a[125545] = 2;
	v->a[125546] = anon_sym_LT_AMP_DASH;
	v->a[125547] = anon_sym_GT_AMP_DASH;
	v->a[125548] = state(2663);
	v->a[125549] = 2;
	v->a[125550] = sym_file_redirect;
	v->a[125551] = aux_sym_redirected_statement_repeat2;
	v->a[125552] = actions(5273);
	v->a[125553] = 6;
	v->a[125554] = anon_sym_PIPE;
	v->a[125555] = anon_sym_PIPE_AMP;
	v->a[125556] = anon_sym_AMP_AMP;
	v->a[125557] = anon_sym_PIPE_PIPE;
	v->a[125558] = anon_sym_LT_LT;
	v->a[125559] = anon_sym_LT_LT_DASH;
	small_parse_table_6278(v);
}

void	small_parse_table_6278(t_small_parse_table_array *v)
{
	v->a[125560] = actions(7185);
	v->a[125561] = 8;
	v->a[125562] = anon_sym_LT;
	v->a[125563] = anon_sym_GT;
	v->a[125564] = anon_sym_GT_GT;
	v->a[125565] = anon_sym_AMP_GT;
	v->a[125566] = anon_sym_AMP_GT_GT;
	v->a[125567] = anon_sym_LT_AMP;
	v->a[125568] = anon_sym_GT_AMP;
	v->a[125569] = anon_sym_GT_PIPE;
	v->a[125570] = 6;
	v->a[125571] = actions(57);
	v->a[125572] = 1;
	v->a[125573] = sym_comment;
	v->a[125574] = actions(2516);
	v->a[125575] = 1;
	v->a[125576] = anon_sym_PIPE;
	v->a[125577] = actions(2638);
	v->a[125578] = 1;
	v->a[125579] = anon_sym_PIPE_AMP;
	small_parse_table_6279(v);
}

void	small_parse_table_6279(t_small_parse_table_array *v)
{
	v->a[125580] = state(2632);
	v->a[125581] = 3;
	v->a[125582] = sym_file_redirect;
	v->a[125583] = sym_heredoc_redirect;
	v->a[125584] = aux_sym_redirected_statement_repeat1;
	v->a[125585] = actions(2630);
	v->a[125586] = 6;
	v->a[125587] = anon_sym_LT;
	v->a[125588] = anon_sym_GT;
	v->a[125589] = anon_sym_AMP_GT;
	v->a[125590] = anon_sym_LT_AMP;
	v->a[125591] = anon_sym_GT_AMP;
	v->a[125592] = anon_sym_LT_LT;
	v->a[125593] = actions(2632);
	v->a[125594] = 9;
	v->a[125595] = sym_file_descriptor;
	v->a[125596] = anon_sym_AMP_AMP;
	v->a[125597] = anon_sym_PIPE_PIPE;
	v->a[125598] = anon_sym_GT_GT;
	v->a[125599] = anon_sym_AMP_GT_GT;
	small_parse_table_6280(v);
}

/* EOF small_parse_table_1255.c */
