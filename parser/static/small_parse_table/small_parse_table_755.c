/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_755.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3775(t_small_parse_table_array *v)
{
	v->a[75500] = actions(1893);
	v->a[75501] = 1;
	v->a[75502] = anon_sym_BQUOTE;
	v->a[75503] = actions(1895);
	v->a[75504] = 1;
	v->a[75505] = sym_extglob_pattern;
	v->a[75506] = state(1396);
	v->a[75507] = 1;
	v->a[75508] = aux_sym_case_statement_repeat1;
	v->a[75509] = state(1923);
	v->a[75510] = 1;
	v->a[75511] = sym_case_item;
	v->a[75512] = state(2177);
	v->a[75513] = 1;
	v->a[75514] = sym__case_item_last;
	v->a[75515] = state(2078);
	v->a[75516] = 2;
	v->a[75517] = sym_concatenation;
	v->a[75518] = sym__extglob_blob;
	v->a[75519] = actions(1875);
	small_parse_table_3776(v);
}

void	small_parse_table_3776(t_small_parse_table_array *v)
{
	v->a[75520] = 3;
	v->a[75521] = sym_raw_string;
	v->a[75522] = sym_number;
	v->a[75523] = sym_word;
	v->a[75524] = state(2004);
	v->a[75525] = 5;
	v->a[75526] = sym_arithmetic_expansion;
	v->a[75527] = sym_string;
	v->a[75528] = sym_simple_expansion;
	v->a[75529] = sym_expansion;
	v->a[75530] = sym_command_substitution;
	v->a[75531] = 3;
	v->a[75532] = actions(3);
	v->a[75533] = 1;
	v->a[75534] = sym_comment;
	v->a[75535] = actions(2372);
	v->a[75536] = 2;
	v->a[75537] = sym_file_descriptor;
	v->a[75538] = aux_sym_heredoc_redirect_token1;
	v->a[75539] = actions(2374);
	small_parse_table_3777(v);
}

void	small_parse_table_3777(t_small_parse_table_array *v)
{
	v->a[75540] = 19;
	v->a[75541] = anon_sym_esac;
	v->a[75542] = anon_sym_PIPE;
	v->a[75543] = anon_sym_SEMI_SEMI;
	v->a[75544] = anon_sym_AMP_AMP;
	v->a[75545] = anon_sym_PIPE_PIPE;
	v->a[75546] = anon_sym_LT;
	v->a[75547] = anon_sym_GT;
	v->a[75548] = anon_sym_GT_GT;
	v->a[75549] = anon_sym_AMP_GT;
	v->a[75550] = anon_sym_AMP_GT_GT;
	v->a[75551] = anon_sym_LT_AMP;
	v->a[75552] = anon_sym_GT_AMP;
	v->a[75553] = anon_sym_GT_PIPE;
	v->a[75554] = anon_sym_LT_AMP_DASH;
	v->a[75555] = anon_sym_GT_AMP_DASH;
	v->a[75556] = anon_sym_LT_LT;
	v->a[75557] = anon_sym_LT_LT_DASH;
	v->a[75558] = anon_sym_AMP;
	v->a[75559] = anon_sym_SEMI;
	small_parse_table_3778(v);
}

void	small_parse_table_3778(t_small_parse_table_array *v)
{
	v->a[75560] = 9;
	v->a[75561] = actions(3);
	v->a[75562] = 1;
	v->a[75563] = sym_comment;
	v->a[75564] = actions(766);
	v->a[75565] = 1;
	v->a[75566] = anon_sym_PIPE;
	v->a[75567] = actions(2494);
	v->a[75568] = 1;
	v->a[75569] = aux_sym_heredoc_redirect_token1;
	v->a[75570] = actions(2496);
	v->a[75571] = 1;
	v->a[75572] = sym_file_descriptor;
	v->a[75573] = actions(804);
	v->a[75574] = 2;
	v->a[75575] = anon_sym_LT_LT;
	v->a[75576] = anon_sym_LT_LT_DASH;
	v->a[75577] = actions(1470);
	v->a[75578] = 2;
	v->a[75579] = anon_sym_AMP_AMP;
	small_parse_table_3779(v);
}

void	small_parse_table_3779(t_small_parse_table_array *v)
{
	v->a[75580] = anon_sym_PIPE_PIPE;
	v->a[75581] = actions(2492);
	v->a[75582] = 2;
	v->a[75583] = anon_sym_LT_AMP_DASH;
	v->a[75584] = anon_sym_GT_AMP_DASH;
	v->a[75585] = state(1397);
	v->a[75586] = 3;
	v->a[75587] = sym_file_redirect;
	v->a[75588] = sym_heredoc_redirect;
	v->a[75589] = aux_sym_redirected_statement_repeat1;
	v->a[75590] = actions(2490);
	v->a[75591] = 8;
	v->a[75592] = anon_sym_LT;
	v->a[75593] = anon_sym_GT;
	v->a[75594] = anon_sym_GT_GT;
	v->a[75595] = anon_sym_AMP_GT;
	v->a[75596] = anon_sym_AMP_GT_GT;
	v->a[75597] = anon_sym_LT_AMP;
	v->a[75598] = anon_sym_GT_AMP;
	v->a[75599] = anon_sym_GT_PIPE;
	small_parse_table_3780(v);
}

/* EOF small_parse_table_755.c */
