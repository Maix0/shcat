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
	v->a[69500] = sym_expansion;
	v->a[69501] = sym_command_substitution;
	v->a[69502] = 6;
	v->a[69503] = actions(3);
	v->a[69504] = 1;
	v->a[69505] = sym_comment;
	v->a[69506] = actions(2071);
	v->a[69507] = 1;
	v->a[69508] = aux_sym_heredoc_redirect_token1;
	v->a[69509] = actions(2758);
	v->a[69510] = 1;
	v->a[69511] = sym_file_descriptor;
	v->a[69512] = state(1397);
	v->a[69513] = 2;
	v->a[69514] = sym_file_redirect;
	v->a[69515] = aux_sym_redirected_statement_repeat2;
	v->a[69516] = actions(2069);
	v->a[69517] = 5;
	v->a[69518] = anon_sym_PIPE;
	v->a[69519] = anon_sym_AMP_AMP;
	small_parse_table_3476(v);
}

void	small_parse_table_3476(t_small_parse_table_array *v)
{
	v->a[69520] = anon_sym_PIPE_PIPE;
	v->a[69521] = anon_sym_LT_LT;
	v->a[69522] = anon_sym_LT_LT_DASH;
	v->a[69523] = actions(2425);
	v->a[69524] = 7;
	v->a[69525] = anon_sym_LT;
	v->a[69526] = anon_sym_GT;
	v->a[69527] = anon_sym_GT_GT;
	v->a[69528] = anon_sym_LT_AMP;
	v->a[69529] = anon_sym_GT_AMP;
	v->a[69530] = anon_sym_GT_PIPE;
	v->a[69531] = anon_sym_LT_GT;
	v->a[69532] = 10;
	v->a[69533] = actions(3);
	v->a[69534] = 1;
	v->a[69535] = sym_comment;
	v->a[69536] = actions(1504);
	v->a[69537] = 1;
	v->a[69538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69539] = actions(1506);
	small_parse_table_3477(v);
}

void	small_parse_table_3477(t_small_parse_table_array *v)
{
	v->a[69540] = 1;
	v->a[69541] = anon_sym_DOLLAR;
	v->a[69542] = actions(1508);
	v->a[69543] = 1;
	v->a[69544] = anon_sym_DQUOTE;
	v->a[69545] = actions(1510);
	v->a[69546] = 1;
	v->a[69547] = anon_sym_DOLLAR_LBRACE;
	v->a[69548] = actions(1512);
	v->a[69549] = 1;
	v->a[69550] = anon_sym_DOLLAR_LPAREN;
	v->a[69551] = actions(1514);
	v->a[69552] = 1;
	v->a[69553] = anon_sym_BQUOTE;
	v->a[69554] = state(716);
	v->a[69555] = 2;
	v->a[69556] = sym_concatenation;
	v->a[69557] = aux_sym_for_statement_repeat1;
	v->a[69558] = actions(1502);
	v->a[69559] = 3;
	small_parse_table_3478(v);
}

void	small_parse_table_3478(t_small_parse_table_array *v)
{
	v->a[69560] = sym_raw_string;
	v->a[69561] = sym_number;
	v->a[69562] = sym_word;
	v->a[69563] = state(902);
	v->a[69564] = 5;
	v->a[69565] = sym_arithmetic_expansion;
	v->a[69566] = sym_string;
	v->a[69567] = sym_simple_expansion;
	v->a[69568] = sym_expansion;
	v->a[69569] = sym_command_substitution;
	v->a[69570] = 10;
	v->a[69571] = actions(3);
	v->a[69572] = 1;
	v->a[69573] = sym_comment;
	v->a[69574] = actions(1012);
	v->a[69575] = 1;
	v->a[69576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69577] = actions(1014);
	v->a[69578] = 1;
	v->a[69579] = anon_sym_DOLLAR;
	small_parse_table_3479(v);
}

void	small_parse_table_3479(t_small_parse_table_array *v)
{
	v->a[69580] = actions(1016);
	v->a[69581] = 1;
	v->a[69582] = anon_sym_DQUOTE;
	v->a[69583] = actions(1018);
	v->a[69584] = 1;
	v->a[69585] = anon_sym_DOLLAR_LBRACE;
	v->a[69586] = actions(1020);
	v->a[69587] = 1;
	v->a[69588] = anon_sym_DOLLAR_LPAREN;
	v->a[69589] = actions(1022);
	v->a[69590] = 1;
	v->a[69591] = anon_sym_BQUOTE;
	v->a[69592] = state(1043);
	v->a[69593] = 2;
	v->a[69594] = sym_concatenation;
	v->a[69595] = aux_sym_for_statement_repeat1;
	v->a[69596] = actions(1973);
	v->a[69597] = 3;
	v->a[69598] = sym_raw_string;
	v->a[69599] = sym_number;
	small_parse_table_3480(v);
}

/* EOF small_parse_table_695.c */
