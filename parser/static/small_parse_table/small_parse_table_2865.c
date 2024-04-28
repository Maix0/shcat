/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2865.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14325(t_small_parse_table_array *v)
{
	v->a[286500] = actions(71);
	v->a[286501] = 1;
	v->a[286502] = sym_comment;
	v->a[286503] = actions(1328);
	v->a[286504] = 7;
	v->a[286505] = anon_sym_PIPE;
	v->a[286506] = anon_sym_LT;
	v->a[286507] = anon_sym_GT;
	v->a[286508] = anon_sym_LT_LT;
	v->a[286509] = anon_sym_AMP_GT;
	v->a[286510] = anon_sym_LT_AMP;
	v->a[286511] = anon_sym_GT_AMP;
	v->a[286512] = actions(1330);
	v->a[286513] = 13;
	v->a[286514] = sym_file_descriptor;
	v->a[286515] = sym__concat;
	v->a[286516] = sym_variable_name;
	v->a[286517] = anon_sym_PIPE_PIPE;
	v->a[286518] = anon_sym_AMP_AMP;
	v->a[286519] = anon_sym_GT_GT;
	small_parse_table_14326(v);
}

void	small_parse_table_14326(t_small_parse_table_array *v)
{
	v->a[286520] = anon_sym_PIPE_AMP;
	v->a[286521] = anon_sym_AMP_GT_GT;
	v->a[286522] = anon_sym_GT_PIPE;
	v->a[286523] = anon_sym_LT_AMP_DASH;
	v->a[286524] = anon_sym_GT_AMP_DASH;
	v->a[286525] = anon_sym_LT_LT_DASH;
	v->a[286526] = aux_sym_concatenation_token1;
	v->a[286527] = 10;
	v->a[286528] = actions(71);
	v->a[286529] = 1;
	v->a[286530] = sym_comment;
	v->a[286531] = actions(11453);
	v->a[286532] = 1;
	v->a[286533] = anon_sym_PIPE;
	v->a[286534] = actions(12860);
	v->a[286535] = 1;
	v->a[286536] = anon_sym_LT_LT;
	v->a[286537] = actions(12862);
	v->a[286538] = 1;
	v->a[286539] = anon_sym_LT_LT_DASH;
	small_parse_table_14327(v);
}

void	small_parse_table_14327(t_small_parse_table_array *v)
{
	v->a[286540] = actions(12864);
	v->a[286541] = 1;
	v->a[286542] = sym_file_descriptor;
	v->a[286543] = actions(12836);
	v->a[286544] = 2;
	v->a[286545] = anon_sym_LT_AMP_DASH;
	v->a[286546] = anon_sym_GT_AMP_DASH;
	v->a[286547] = actions(11455);
	v->a[286548] = 3;
	v->a[286549] = anon_sym_PIPE_PIPE;
	v->a[286550] = anon_sym_AMP_AMP;
	v->a[286551] = anon_sym_PIPE_AMP;
	v->a[286552] = actions(12834);
	v->a[286553] = 3;
	v->a[286554] = anon_sym_GT_GT;
	v->a[286555] = anon_sym_AMP_GT_GT;
	v->a[286556] = anon_sym_GT_PIPE;
	v->a[286557] = state(5465);
	v->a[286558] = 3;
	v->a[286559] = sym_file_redirect;
	small_parse_table_14328(v);
}

void	small_parse_table_14328(t_small_parse_table_array *v)
{
	v->a[286560] = sym_heredoc_redirect;
	v->a[286561] = aux_sym_redirected_statement_repeat1;
	v->a[286562] = actions(12832);
	v->a[286563] = 5;
	v->a[286564] = anon_sym_LT;
	v->a[286565] = anon_sym_GT;
	v->a[286566] = anon_sym_AMP_GT;
	v->a[286567] = anon_sym_LT_AMP;
	v->a[286568] = anon_sym_GT_AMP;
	v->a[286569] = 5;
	v->a[286570] = actions(71);
	v->a[286571] = 1;
	v->a[286572] = sym_comment;
	v->a[286573] = actions(12866);
	v->a[286574] = 1;
	v->a[286575] = sym__special_character;
	v->a[286576] = state(5469);
	v->a[286577] = 1;
	v->a[286578] = aux_sym__literal_repeat1;
	v->a[286579] = actions(5721);
	small_parse_table_14329(v);
}

void	small_parse_table_14329(t_small_parse_table_array *v)
{
	v->a[286580] = 7;
	v->a[286581] = anon_sym_PIPE;
	v->a[286582] = anon_sym_LT;
	v->a[286583] = anon_sym_GT;
	v->a[286584] = anon_sym_LT_LT;
	v->a[286585] = anon_sym_AMP_GT;
	v->a[286586] = anon_sym_LT_AMP;
	v->a[286587] = anon_sym_GT_AMP;
	v->a[286588] = actions(5723);
	v->a[286589] = 11;
	v->a[286590] = sym_file_descriptor;
	v->a[286591] = anon_sym_PIPE_PIPE;
	v->a[286592] = anon_sym_AMP_AMP;
	v->a[286593] = anon_sym_GT_GT;
	v->a[286594] = anon_sym_PIPE_AMP;
	v->a[286595] = anon_sym_AMP_GT_GT;
	v->a[286596] = anon_sym_GT_PIPE;
	v->a[286597] = anon_sym_LT_AMP_DASH;
	v->a[286598] = anon_sym_GT_AMP_DASH;
	v->a[286599] = anon_sym_LT_LT_DASH;
	small_parse_table_14330(v);
}

/* EOF small_parse_table_2865.c */
