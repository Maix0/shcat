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
	v->a[57700] = sym_comment;
	v->a[57701] = actions(1937);
	v->a[57702] = 1;
	v->a[57703] = aux_sym_heredoc_redirect_token1;
	v->a[57704] = actions(1954);
	v->a[57705] = 1;
	v->a[57706] = sym_file_descriptor;
	v->a[57707] = actions(1951);
	v->a[57708] = 2;
	v->a[57709] = anon_sym_LT_LT;
	v->a[57710] = anon_sym_LT_LT_DASH;
	v->a[57711] = state(1022);
	v->a[57712] = 3;
	v->a[57713] = sym_file_redirect;
	v->a[57714] = sym_heredoc_redirect;
	v->a[57715] = aux_sym_redirected_statement_repeat1;
	v->a[57716] = actions(1929);
	v->a[57717] = 7;
	v->a[57718] = anon_sym_esac;
	v->a[57719] = anon_sym_PIPE;
	small_parse_table_2886(v);
}

void	small_parse_table_2886(t_small_parse_table_array *v)
{
	v->a[57720] = anon_sym_SEMI_SEMI;
	v->a[57721] = anon_sym_AMP_AMP;
	v->a[57722] = anon_sym_PIPE_PIPE;
	v->a[57723] = anon_sym_AMP;
	v->a[57724] = anon_sym_SEMI;
	v->a[57725] = actions(1948);
	v->a[57726] = 7;
	v->a[57727] = anon_sym_LT;
	v->a[57728] = anon_sym_GT;
	v->a[57729] = anon_sym_GT_GT;
	v->a[57730] = anon_sym_LT_AMP;
	v->a[57731] = anon_sym_GT_AMP;
	v->a[57732] = anon_sym_GT_PIPE;
	v->a[57733] = anon_sym_LT_GT;
	v->a[57734] = 5;
	v->a[57735] = actions(3);
	v->a[57736] = 1;
	v->a[57737] = sym_comment;
	v->a[57738] = actions(1961);
	v->a[57739] = 1;
	small_parse_table_2887(v);
}

void	small_parse_table_2887(t_small_parse_table_array *v)
{
	v->a[57740] = sym_variable_name;
	v->a[57741] = actions(1959);
	v->a[57742] = 2;
	v->a[57743] = sym_file_descriptor;
	v->a[57744] = aux_sym_heredoc_redirect_token1;
	v->a[57745] = state(1023);
	v->a[57746] = 2;
	v->a[57747] = sym_variable_assignment;
	v->a[57748] = aux_sym__variable_assignments_repeat1;
	v->a[57749] = actions(1957);
	v->a[57750] = 16;
	v->a[57751] = anon_sym_esac;
	v->a[57752] = anon_sym_PIPE;
	v->a[57753] = anon_sym_SEMI_SEMI;
	v->a[57754] = anon_sym_AMP_AMP;
	v->a[57755] = anon_sym_PIPE_PIPE;
	v->a[57756] = anon_sym_LT;
	v->a[57757] = anon_sym_GT;
	v->a[57758] = anon_sym_GT_GT;
	v->a[57759] = anon_sym_LT_AMP;
	small_parse_table_2888(v);
}

void	small_parse_table_2888(t_small_parse_table_array *v)
{
	v->a[57760] = anon_sym_GT_AMP;
	v->a[57761] = anon_sym_GT_PIPE;
	v->a[57762] = anon_sym_LT_GT;
	v->a[57763] = anon_sym_LT_LT;
	v->a[57764] = anon_sym_LT_LT_DASH;
	v->a[57765] = anon_sym_AMP;
	v->a[57766] = anon_sym_SEMI;
	v->a[57767] = 15;
	v->a[57768] = actions(3);
	v->a[57769] = 1;
	v->a[57770] = sym_comment;
	v->a[57771] = actions(1637);
	v->a[57772] = 1;
	v->a[57773] = anon_sym_LPAREN;
	v->a[57774] = actions(1641);
	v->a[57775] = 1;
	v->a[57776] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57777] = actions(1643);
	v->a[57778] = 1;
	v->a[57779] = anon_sym_DOLLAR;
	small_parse_table_2889(v);
}

void	small_parse_table_2889(t_small_parse_table_array *v)
{
	v->a[57780] = actions(1645);
	v->a[57781] = 1;
	v->a[57782] = anon_sym_DQUOTE;
	v->a[57783] = actions(1647);
	v->a[57784] = 1;
	v->a[57785] = anon_sym_DOLLAR_LBRACE;
	v->a[57786] = actions(1649);
	v->a[57787] = 1;
	v->a[57788] = anon_sym_DOLLAR_LPAREN;
	v->a[57789] = actions(1651);
	v->a[57790] = 1;
	v->a[57791] = anon_sym_BQUOTE;
	v->a[57792] = actions(1653);
	v->a[57793] = 1;
	v->a[57794] = sym_extglob_pattern;
	v->a[57795] = state(1123);
	v->a[57796] = 1;
	v->a[57797] = aux_sym_case_statement_repeat1;
	v->a[57798] = state(1713);
	v->a[57799] = 1;
	small_parse_table_2890(v);
}

/* EOF small_parse_table_577.c */
