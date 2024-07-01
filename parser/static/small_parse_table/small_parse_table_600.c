/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_600.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3000(t_small_parse_table_array *v)
{
	v->a[60000] = anon_sym_LT_LT;
	v->a[60001] = anon_sym_LT_LT_DASH;
	v->a[60002] = actions(688);
	v->a[60003] = 2;
	v->a[60004] = anon_sym_AMP;
	v->a[60005] = anon_sym_SEMI;
	v->a[60006] = actions(695);
	v->a[60007] = 2;
	v->a[60008] = anon_sym_esac;
	v->a[60009] = anon_sym_SEMI_SEMI;
	v->a[60010] = actions(2015);
	v->a[60011] = 2;
	v->a[60012] = anon_sym_LT_AMP_DASH;
	v->a[60013] = anon_sym_GT_AMP_DASH;
	v->a[60014] = state(1176);
	v->a[60015] = 3;
	v->a[60016] = sym_file_redirect;
	v->a[60017] = sym_heredoc_redirect;
	v->a[60018] = aux_sym_redirected_statement_repeat1;
	v->a[60019] = actions(2013);
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = 6;
	v->a[60021] = anon_sym_LT;
	v->a[60022] = anon_sym_GT;
	v->a[60023] = anon_sym_GT_GT;
	v->a[60024] = anon_sym_LT_AMP;
	v->a[60025] = anon_sym_GT_AMP;
	v->a[60026] = anon_sym_GT_PIPE;
	v->a[60027] = 12;
	v->a[60028] = actions(3);
	v->a[60029] = 1;
	v->a[60030] = sym_comment;
	v->a[60031] = actions(682);
	v->a[60032] = 1;
	v->a[60033] = anon_sym_PIPE;
	v->a[60034] = actions(2017);
	v->a[60035] = 1;
	v->a[60036] = aux_sym_heredoc_redirect_token1;
	v->a[60037] = actions(2019);
	v->a[60038] = 1;
	v->a[60039] = sym_file_descriptor;
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = state(689);
	v->a[60041] = 1;
	v->a[60042] = sym_terminator;
	v->a[60043] = actions(684);
	v->a[60044] = 2;
	v->a[60045] = anon_sym_AMP_AMP;
	v->a[60046] = anon_sym_PIPE_PIPE;
	v->a[60047] = actions(686);
	v->a[60048] = 2;
	v->a[60049] = anon_sym_LT_LT;
	v->a[60050] = anon_sym_LT_LT_DASH;
	v->a[60051] = actions(688);
	v->a[60052] = 2;
	v->a[60053] = anon_sym_AMP;
	v->a[60054] = anon_sym_SEMI;
	v->a[60055] = actions(695);
	v->a[60056] = 2;
	v->a[60057] = anon_sym_esac;
	v->a[60058] = anon_sym_SEMI_SEMI;
	v->a[60059] = actions(2015);
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = 2;
	v->a[60061] = anon_sym_LT_AMP_DASH;
	v->a[60062] = anon_sym_GT_AMP_DASH;
	v->a[60063] = state(1176);
	v->a[60064] = 3;
	v->a[60065] = sym_file_redirect;
	v->a[60066] = sym_heredoc_redirect;
	v->a[60067] = aux_sym_redirected_statement_repeat1;
	v->a[60068] = actions(2013);
	v->a[60069] = 6;
	v->a[60070] = anon_sym_LT;
	v->a[60071] = anon_sym_GT;
	v->a[60072] = anon_sym_GT_GT;
	v->a[60073] = anon_sym_LT_AMP;
	v->a[60074] = anon_sym_GT_AMP;
	v->a[60075] = anon_sym_GT_PIPE;
	v->a[60076] = 3;
	v->a[60077] = actions(3);
	v->a[60078] = 1;
	v->a[60079] = sym_comment;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = actions(1194);
	v->a[60081] = 2;
	v->a[60082] = sym_file_descriptor;
	v->a[60083] = sym__concat;
	v->a[60084] = actions(1189);
	v->a[60085] = 21;
	v->a[60086] = anon_sym_AMP_AMP;
	v->a[60087] = anon_sym_PIPE_PIPE;
	v->a[60088] = anon_sym_LT;
	v->a[60089] = anon_sym_GT;
	v->a[60090] = anon_sym_GT_GT;
	v->a[60091] = anon_sym_LT_AMP;
	v->a[60092] = anon_sym_GT_AMP;
	v->a[60093] = anon_sym_GT_PIPE;
	v->a[60094] = anon_sym_LT_AMP_DASH;
	v->a[60095] = anon_sym_GT_AMP_DASH;
	v->a[60096] = aux_sym_heredoc_redirect_token1;
	v->a[60097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60098] = aux_sym_concatenation_token1;
	v->a[60099] = anon_sym_DOLLAR;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
