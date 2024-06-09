/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_415.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2075(t_small_parse_table_array *v)
{
	v->a[41500] = anon_sym_GT_GT_EQ;
	v->a[41501] = anon_sym_AMP_EQ;
	v->a[41502] = anon_sym_CARET_EQ;
	v->a[41503] = anon_sym_PIPE_EQ;
	v->a[41504] = anon_sym_QMARK;
	v->a[41505] = 7;
	v->a[41506] = actions(3);
	v->a[41507] = 1;
	v->a[41508] = sym_comment;
	v->a[41509] = actions(1081);
	v->a[41510] = 1;
	v->a[41511] = sym_file_descriptor;
	v->a[41512] = actions(1559);
	v->a[41513] = 1;
	v->a[41514] = sym_variable_name;
	v->a[41515] = state(1300);
	v->a[41516] = 2;
	v->a[41517] = sym_variable_assignment;
	v->a[41518] = aux_sym_variable_assignments_repeat1;
	v->a[41519] = state(1302);
	small_parse_table_2076(v);
}

void	small_parse_table_2076(t_small_parse_table_array *v)
{
	v->a[41520] = 3;
	v->a[41521] = sym_file_redirect;
	v->a[41522] = sym_heredoc_redirect;
	v->a[41523] = aux_sym_redirected_statement_repeat1;
	v->a[41524] = actions(1000);
	v->a[41525] = 10;
	v->a[41526] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41527] = anon_sym_DOLLAR;
	v->a[41528] = anon_sym_DQUOTE;
	v->a[41529] = sym_raw_string;
	v->a[41530] = aux_sym_number_token1;
	v->a[41531] = aux_sym_number_token2;
	v->a[41532] = anon_sym_DOLLAR_LBRACE;
	v->a[41533] = anon_sym_DOLLAR_LPAREN;
	v->a[41534] = anon_sym_BQUOTE;
	v->a[41535] = sym_word;
	v->a[41536] = actions(1002);
	v->a[41537] = 16;
	v->a[41538] = anon_sym_PIPE;
	v->a[41539] = anon_sym_AMP_AMP;
	small_parse_table_2077(v);
}

void	small_parse_table_2077(t_small_parse_table_array *v)
{
	v->a[41540] = anon_sym_PIPE_PIPE;
	v->a[41541] = anon_sym_LT;
	v->a[41542] = anon_sym_GT;
	v->a[41543] = anon_sym_GT_GT;
	v->a[41544] = anon_sym_AMP_GT;
	v->a[41545] = anon_sym_AMP_GT_GT;
	v->a[41546] = anon_sym_LT_AMP;
	v->a[41547] = anon_sym_GT_AMP;
	v->a[41548] = anon_sym_GT_PIPE;
	v->a[41549] = anon_sym_LT_AMP_DASH;
	v->a[41550] = anon_sym_GT_AMP_DASH;
	v->a[41551] = anon_sym_LT_LT;
	v->a[41552] = anon_sym_LT_LT_DASH;
	v->a[41553] = aux_sym_heredoc_redirect_token1;
	v->a[41554] = 3;
	v->a[41555] = actions(3);
	v->a[41556] = 1;
	v->a[41557] = sym_comment;
	v->a[41558] = actions(1301);
	v->a[41559] = 2;
	small_parse_table_2078(v);
}

void	small_parse_table_2078(t_small_parse_table_array *v)
{
	v->a[41560] = sym_file_descriptor;
	v->a[41561] = sym__concat;
	v->a[41562] = actions(1299);
	v->a[41563] = 31;
	v->a[41564] = anon_sym_esac;
	v->a[41565] = anon_sym_PIPE;
	v->a[41566] = anon_sym_SEMI_SEMI;
	v->a[41567] = anon_sym_AMP_AMP;
	v->a[41568] = anon_sym_PIPE_PIPE;
	v->a[41569] = anon_sym_LT;
	v->a[41570] = anon_sym_GT;
	v->a[41571] = anon_sym_GT_GT;
	v->a[41572] = anon_sym_AMP_GT;
	v->a[41573] = anon_sym_AMP_GT_GT;
	v->a[41574] = anon_sym_LT_AMP;
	v->a[41575] = anon_sym_GT_AMP;
	v->a[41576] = anon_sym_GT_PIPE;
	v->a[41577] = anon_sym_LT_AMP_DASH;
	v->a[41578] = anon_sym_GT_AMP_DASH;
	v->a[41579] = anon_sym_LT_LT;
	small_parse_table_2079(v);
}

void	small_parse_table_2079(t_small_parse_table_array *v)
{
	v->a[41580] = anon_sym_LT_LT_DASH;
	v->a[41581] = aux_sym_heredoc_redirect_token1;
	v->a[41582] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41583] = anon_sym_AMP;
	v->a[41584] = aux_sym_concatenation_token1;
	v->a[41585] = anon_sym_DOLLAR;
	v->a[41586] = anon_sym_DQUOTE;
	v->a[41587] = sym_raw_string;
	v->a[41588] = aux_sym_number_token1;
	v->a[41589] = aux_sym_number_token2;
	v->a[41590] = anon_sym_DOLLAR_LBRACE;
	v->a[41591] = anon_sym_DOLLAR_LPAREN;
	v->a[41592] = anon_sym_BQUOTE;
	v->a[41593] = sym_word;
	v->a[41594] = anon_sym_SEMI;
	v->a[41595] = 3;
	v->a[41596] = actions(3);
	v->a[41597] = 1;
	v->a[41598] = sym_comment;
	v->a[41599] = actions(1311);
	small_parse_table_2080(v);
}

/* EOF small_parse_table_415.c */
