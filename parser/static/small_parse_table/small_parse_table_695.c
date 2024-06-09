/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_695.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3475(t_small_parse_table_array *v)
{
	v->a[69500] = 1;
	v->a[69501] = sym_case_item;
	v->a[69502] = state(2140);
	v->a[69503] = 1;
	v->a[69504] = sym__case_item_last;
	v->a[69505] = actions(2111);
	v->a[69506] = 2;
	v->a[69507] = sym_raw_string;
	v->a[69508] = sym_word;
	v->a[69509] = state(2016);
	v->a[69510] = 2;
	v->a[69511] = sym_concatenation;
	v->a[69512] = sym__extglob_blob;
	v->a[69513] = state(1896);
	v->a[69514] = 6;
	v->a[69515] = sym_arithmetic_expansion;
	v->a[69516] = sym_string;
	v->a[69517] = sym_number;
	v->a[69518] = sym_simple_expansion;
	v->a[69519] = sym_expansion;
	small_parse_table_3476(v);
}

void	small_parse_table_3476(t_small_parse_table_array *v)
{
	v->a[69520] = sym_command_substitution;
	v->a[69521] = 3;
	v->a[69522] = actions(3);
	v->a[69523] = 1;
	v->a[69524] = sym_comment;
	v->a[69525] = actions(1842);
	v->a[69526] = 3;
	v->a[69527] = sym_file_descriptor;
	v->a[69528] = ts_builtin_sym_end;
	v->a[69529] = aux_sym_heredoc_redirect_token1;
	v->a[69530] = actions(1840);
	v->a[69531] = 20;
	v->a[69532] = anon_sym_PIPE;
	v->a[69533] = anon_sym_RPAREN;
	v->a[69534] = anon_sym_SEMI_SEMI;
	v->a[69535] = anon_sym_AMP_AMP;
	v->a[69536] = anon_sym_PIPE_PIPE;
	v->a[69537] = anon_sym_LT;
	v->a[69538] = anon_sym_GT;
	v->a[69539] = anon_sym_GT_GT;
	small_parse_table_3477(v);
}

void	small_parse_table_3477(t_small_parse_table_array *v)
{
	v->a[69540] = anon_sym_AMP_GT;
	v->a[69541] = anon_sym_AMP_GT_GT;
	v->a[69542] = anon_sym_LT_AMP;
	v->a[69543] = anon_sym_GT_AMP;
	v->a[69544] = anon_sym_GT_PIPE;
	v->a[69545] = anon_sym_LT_AMP_DASH;
	v->a[69546] = anon_sym_GT_AMP_DASH;
	v->a[69547] = anon_sym_LT_LT;
	v->a[69548] = anon_sym_LT_LT_DASH;
	v->a[69549] = anon_sym_AMP;
	v->a[69550] = anon_sym_BQUOTE;
	v->a[69551] = anon_sym_SEMI;
	v->a[69552] = 3;
	v->a[69553] = actions(3);
	v->a[69554] = 1;
	v->a[69555] = sym_comment;
	v->a[69556] = actions(2558);
	v->a[69557] = 3;
	v->a[69558] = sym_file_descriptor;
	v->a[69559] = ts_builtin_sym_end;
	small_parse_table_3478(v);
}

void	small_parse_table_3478(t_small_parse_table_array *v)
{
	v->a[69560] = aux_sym_heredoc_redirect_token1;
	v->a[69561] = actions(2560);
	v->a[69562] = 20;
	v->a[69563] = anon_sym_PIPE;
	v->a[69564] = anon_sym_RPAREN;
	v->a[69565] = anon_sym_SEMI_SEMI;
	v->a[69566] = anon_sym_AMP_AMP;
	v->a[69567] = anon_sym_PIPE_PIPE;
	v->a[69568] = anon_sym_LT;
	v->a[69569] = anon_sym_GT;
	v->a[69570] = anon_sym_GT_GT;
	v->a[69571] = anon_sym_AMP_GT;
	v->a[69572] = anon_sym_AMP_GT_GT;
	v->a[69573] = anon_sym_LT_AMP;
	v->a[69574] = anon_sym_GT_AMP;
	v->a[69575] = anon_sym_GT_PIPE;
	v->a[69576] = anon_sym_LT_AMP_DASH;
	v->a[69577] = anon_sym_GT_AMP_DASH;
	v->a[69578] = anon_sym_LT_LT;
	v->a[69579] = anon_sym_LT_LT_DASH;
	small_parse_table_3479(v);
}

void	small_parse_table_3479(t_small_parse_table_array *v)
{
	v->a[69580] = anon_sym_AMP;
	v->a[69581] = anon_sym_BQUOTE;
	v->a[69582] = anon_sym_SEMI;
	v->a[69583] = 3;
	v->a[69584] = actions(3);
	v->a[69585] = 1;
	v->a[69586] = sym_comment;
	v->a[69587] = actions(2562);
	v->a[69588] = 3;
	v->a[69589] = sym_file_descriptor;
	v->a[69590] = ts_builtin_sym_end;
	v->a[69591] = aux_sym_heredoc_redirect_token1;
	v->a[69592] = actions(2564);
	v->a[69593] = 20;
	v->a[69594] = anon_sym_PIPE;
	v->a[69595] = anon_sym_RPAREN;
	v->a[69596] = anon_sym_SEMI_SEMI;
	v->a[69597] = anon_sym_AMP_AMP;
	v->a[69598] = anon_sym_PIPE_PIPE;
	v->a[69599] = anon_sym_LT;
	small_parse_table_3480(v);
}

/* EOF small_parse_table_695.c */
