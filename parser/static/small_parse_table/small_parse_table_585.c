/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_585.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2925(t_small_parse_table_array *v)
{
	v->a[58500] = anon_sym_AMP;
	v->a[58501] = anon_sym_SEMI;
	v->a[58502] = 11;
	v->a[58503] = actions(3);
	v->a[58504] = 1;
	v->a[58505] = sym_comment;
	v->a[58506] = actions(736);
	v->a[58507] = 1;
	v->a[58508] = anon_sym_PIPE;
	v->a[58509] = actions(738);
	v->a[58510] = 1;
	v->a[58511] = anon_sym_SEMI_SEMI;
	v->a[58512] = actions(1865);
	v->a[58513] = 1;
	v->a[58514] = aux_sym_heredoc_redirect_token1;
	v->a[58515] = actions(1889);
	v->a[58516] = 1;
	v->a[58517] = sym_file_descriptor;
	v->a[58518] = state(631);
	v->a[58519] = 1;
	small_parse_table_2926(v);
}

void	small_parse_table_2926(t_small_parse_table_array *v)
{
	v->a[58520] = sym_terminator;
	v->a[58521] = actions(740);
	v->a[58522] = 2;
	v->a[58523] = anon_sym_AMP;
	v->a[58524] = anon_sym_SEMI;
	v->a[58525] = actions(744);
	v->a[58526] = 2;
	v->a[58527] = anon_sym_LT_LT;
	v->a[58528] = anon_sym_LT_LT_DASH;
	v->a[58529] = actions(955);
	v->a[58530] = 2;
	v->a[58531] = anon_sym_AMP_AMP;
	v->a[58532] = anon_sym_PIPE_PIPE;
	v->a[58533] = state(1194);
	v->a[58534] = 3;
	v->a[58535] = sym_file_redirect;
	v->a[58536] = sym_heredoc_redirect;
	v->a[58537] = aux_sym_redirected_statement_repeat1;
	v->a[58538] = actions(1887);
	v->a[58539] = 7;
	small_parse_table_2927(v);
}

void	small_parse_table_2927(t_small_parse_table_array *v)
{
	v->a[58540] = anon_sym_LT;
	v->a[58541] = anon_sym_GT;
	v->a[58542] = anon_sym_GT_GT;
	v->a[58543] = anon_sym_LT_AMP;
	v->a[58544] = anon_sym_GT_AMP;
	v->a[58545] = anon_sym_GT_PIPE;
	v->a[58546] = anon_sym_LT_GT;
	v->a[58547] = 5;
	v->a[58548] = actions(3);
	v->a[58549] = 1;
	v->a[58550] = sym_comment;
	v->a[58551] = actions(736);
	v->a[58552] = 1;
	v->a[58553] = anon_sym_PIPE;
	v->a[58554] = actions(997);
	v->a[58555] = 3;
	v->a[58556] = sym_file_descriptor;
	v->a[58557] = ts_builtin_sym_end;
	v->a[58558] = aux_sym_heredoc_redirect_token1;
	v->a[58559] = state(1073);
	small_parse_table_2928(v);
}

void	small_parse_table_2928(t_small_parse_table_array *v)
{
	v->a[58560] = 3;
	v->a[58561] = sym_file_redirect;
	v->a[58562] = sym_heredoc_redirect;
	v->a[58563] = aux_sym_redirected_statement_repeat1;
	v->a[58564] = actions(960);
	v->a[58565] = 14;
	v->a[58566] = anon_sym_SEMI_SEMI;
	v->a[58567] = anon_sym_AMP_AMP;
	v->a[58568] = anon_sym_PIPE_PIPE;
	v->a[58569] = anon_sym_LT;
	v->a[58570] = anon_sym_GT;
	v->a[58571] = anon_sym_GT_GT;
	v->a[58572] = anon_sym_LT_AMP;
	v->a[58573] = anon_sym_GT_AMP;
	v->a[58574] = anon_sym_GT_PIPE;
	v->a[58575] = anon_sym_LT_GT;
	v->a[58576] = anon_sym_LT_LT;
	v->a[58577] = anon_sym_LT_LT_DASH;
	v->a[58578] = anon_sym_AMP;
	v->a[58579] = anon_sym_SEMI;
	small_parse_table_2929(v);
}

void	small_parse_table_2929(t_small_parse_table_array *v)
{
	v->a[58580] = 6;
	v->a[58581] = actions(3);
	v->a[58582] = 1;
	v->a[58583] = sym_comment;
	v->a[58584] = actions(1941);
	v->a[58585] = 1;
	v->a[58586] = aux_sym_concatenation_token1;
	v->a[58587] = actions(1943);
	v->a[58588] = 1;
	v->a[58589] = sym__concat;
	v->a[58590] = state(1093);
	v->a[58591] = 1;
	v->a[58592] = aux_sym_concatenation_repeat1;
	v->a[58593] = actions(1172);
	v->a[58594] = 2;
	v->a[58595] = sym_file_descriptor;
	v->a[58596] = sym_variable_name;
	v->a[58597] = actions(1168);
	v->a[58598] = 16;
	v->a[58599] = anon_sym_LT;
	small_parse_table_2930(v);
}

/* EOF small_parse_table_585.c */
