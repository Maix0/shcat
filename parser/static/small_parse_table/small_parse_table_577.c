/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_577.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2885(t_small_parse_table_array *v)
{
	v->a[57700] = 2;
	v->a[57701] = anon_sym_AMP_AMP;
	v->a[57702] = anon_sym_PIPE_PIPE;
	v->a[57703] = state(1194);
	v->a[57704] = 3;
	v->a[57705] = sym_file_redirect;
	v->a[57706] = sym_heredoc_redirect;
	v->a[57707] = aux_sym_redirected_statement_repeat1;
	v->a[57708] = actions(1941);
	v->a[57709] = 7;
	v->a[57710] = anon_sym_LT;
	v->a[57711] = anon_sym_GT;
	v->a[57712] = anon_sym_GT_GT;
	v->a[57713] = anon_sym_LT_AMP;
	v->a[57714] = anon_sym_GT_AMP;
	v->a[57715] = anon_sym_GT_PIPE;
	v->a[57716] = anon_sym_LT_GT;
	v->a[57717] = 11;
	v->a[57718] = actions(3);
	v->a[57719] = 1;
	small_parse_table_2886(v);
}

void	small_parse_table_2886(t_small_parse_table_array *v)
{
	v->a[57720] = sym_comment;
	v->a[57721] = actions(782);
	v->a[57722] = 1;
	v->a[57723] = anon_sym_PIPE;
	v->a[57724] = actions(784);
	v->a[57725] = 1;
	v->a[57726] = anon_sym_SEMI_SEMI;
	v->a[57727] = actions(786);
	v->a[57728] = 1;
	v->a[57729] = anon_sym_SEMI;
	v->a[57730] = actions(1888);
	v->a[57731] = 1;
	v->a[57732] = aux_sym_heredoc_redirect_token1;
	v->a[57733] = actions(1945);
	v->a[57734] = 1;
	v->a[57735] = sym_file_descriptor;
	v->a[57736] = state(573);
	v->a[57737] = 1;
	v->a[57738] = sym_terminator;
	v->a[57739] = actions(790);
	small_parse_table_2887(v);
}

void	small_parse_table_2887(t_small_parse_table_array *v)
{
	v->a[57740] = 2;
	v->a[57741] = anon_sym_LT_LT;
	v->a[57742] = anon_sym_LT_LT_DASH;
	v->a[57743] = actions(1028);
	v->a[57744] = 2;
	v->a[57745] = anon_sym_AMP_AMP;
	v->a[57746] = anon_sym_PIPE_PIPE;
	v->a[57747] = state(1194);
	v->a[57748] = 3;
	v->a[57749] = sym_file_redirect;
	v->a[57750] = sym_heredoc_redirect;
	v->a[57751] = aux_sym_redirected_statement_repeat1;
	v->a[57752] = actions(1941);
	v->a[57753] = 7;
	v->a[57754] = anon_sym_LT;
	v->a[57755] = anon_sym_GT;
	v->a[57756] = anon_sym_GT_GT;
	v->a[57757] = anon_sym_LT_AMP;
	v->a[57758] = anon_sym_GT_AMP;
	v->a[57759] = anon_sym_GT_PIPE;
	small_parse_table_2888(v);
}

void	small_parse_table_2888(t_small_parse_table_array *v)
{
	v->a[57760] = anon_sym_LT_GT;
	v->a[57761] = 10;
	v->a[57762] = actions(3);
	v->a[57763] = 1;
	v->a[57764] = sym_comment;
	v->a[57765] = actions(782);
	v->a[57766] = 1;
	v->a[57767] = anon_sym_PIPE;
	v->a[57768] = actions(1945);
	v->a[57769] = 1;
	v->a[57770] = sym_file_descriptor;
	v->a[57771] = actions(1947);
	v->a[57772] = 1;
	v->a[57773] = aux_sym_heredoc_redirect_token1;
	v->a[57774] = state(706);
	v->a[57775] = 1;
	v->a[57776] = sym_terminator;
	v->a[57777] = actions(790);
	v->a[57778] = 2;
	v->a[57779] = anon_sym_LT_LT;
	small_parse_table_2889(v);
}

void	small_parse_table_2889(t_small_parse_table_array *v)
{
	v->a[57780] = anon_sym_LT_LT_DASH;
	v->a[57781] = actions(1028);
	v->a[57782] = 2;
	v->a[57783] = anon_sym_AMP_AMP;
	v->a[57784] = anon_sym_PIPE_PIPE;
	v->a[57785] = actions(1089);
	v->a[57786] = 2;
	v->a[57787] = anon_sym_SEMI_SEMI;
	v->a[57788] = anon_sym_SEMI;
	v->a[57789] = state(1194);
	v->a[57790] = 3;
	v->a[57791] = sym_file_redirect;
	v->a[57792] = sym_heredoc_redirect;
	v->a[57793] = aux_sym_redirected_statement_repeat1;
	v->a[57794] = actions(1941);
	v->a[57795] = 7;
	v->a[57796] = anon_sym_LT;
	v->a[57797] = anon_sym_GT;
	v->a[57798] = anon_sym_GT_GT;
	v->a[57799] = anon_sym_LT_AMP;
	small_parse_table_2890(v);
}

/* EOF small_parse_table_577.c */
