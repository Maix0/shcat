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
	v->a[60000] = aux_sym_concatenation_token1;
	v->a[60001] = anon_sym_DOLLAR;
	v->a[60002] = anon_sym_DQUOTE;
	v->a[60003] = sym_raw_string;
	v->a[60004] = sym_number;
	v->a[60005] = anon_sym_DOLLAR_LBRACE;
	v->a[60006] = anon_sym_DOLLAR_LPAREN;
	v->a[60007] = anon_sym_BQUOTE;
	v->a[60008] = sym_word;
	v->a[60009] = 3;
	v->a[60010] = actions(3);
	v->a[60011] = 1;
	v->a[60012] = sym_comment;
	v->a[60013] = actions(539);
	v->a[60014] = 4;
	v->a[60015] = sym_file_descriptor;
	v->a[60016] = sym__concat;
	v->a[60017] = sym_variable_name;
	v->a[60018] = aux_sym_heredoc_redirect_token1;
	v->a[60019] = actions(537);
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = 16;
	v->a[60021] = anon_sym_esac;
	v->a[60022] = anon_sym_PIPE;
	v->a[60023] = anon_sym_SEMI_SEMI;
	v->a[60024] = anon_sym_AMP_AMP;
	v->a[60025] = anon_sym_PIPE_PIPE;
	v->a[60026] = anon_sym_LT;
	v->a[60027] = anon_sym_GT;
	v->a[60028] = anon_sym_GT_GT;
	v->a[60029] = anon_sym_LT_AMP;
	v->a[60030] = anon_sym_GT_AMP;
	v->a[60031] = anon_sym_GT_PIPE;
	v->a[60032] = anon_sym_LT_GT;
	v->a[60033] = anon_sym_LT_LT;
	v->a[60034] = anon_sym_LT_LT_DASH;
	v->a[60035] = aux_sym_concatenation_token1;
	v->a[60036] = anon_sym_SEMI;
	v->a[60037] = 7;
	v->a[60038] = actions(3);
	v->a[60039] = 1;
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = sym_comment;
	v->a[60041] = actions(1878);
	v->a[60042] = 1;
	v->a[60043] = sym_file_descriptor;
	v->a[60044] = actions(1951);
	v->a[60045] = 1;
	v->a[60046] = aux_sym_heredoc_redirect_token1;
	v->a[60047] = actions(884);
	v->a[60048] = 2;
	v->a[60049] = anon_sym_LT_LT;
	v->a[60050] = anon_sym_LT_LT_DASH;
	v->a[60051] = state(1072);
	v->a[60052] = 3;
	v->a[60053] = sym_file_redirect;
	v->a[60054] = sym_heredoc_redirect;
	v->a[60055] = aux_sym_redirected_statement_repeat1;
	v->a[60056] = actions(1949);
	v->a[60057] = 6;
	v->a[60058] = anon_sym_esac;
	v->a[60059] = anon_sym_PIPE;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = anon_sym_SEMI_SEMI;
	v->a[60061] = anon_sym_AMP_AMP;
	v->a[60062] = anon_sym_PIPE_PIPE;
	v->a[60063] = anon_sym_SEMI;
	v->a[60064] = actions(1874);
	v->a[60065] = 7;
	v->a[60066] = anon_sym_LT;
	v->a[60067] = anon_sym_GT;
	v->a[60068] = anon_sym_GT_GT;
	v->a[60069] = anon_sym_LT_AMP;
	v->a[60070] = anon_sym_GT_AMP;
	v->a[60071] = anon_sym_GT_PIPE;
	v->a[60072] = anon_sym_LT_GT;
	v->a[60073] = 5;
	v->a[60074] = actions(3);
	v->a[60075] = 1;
	v->a[60076] = sym_comment;
	v->a[60077] = actions(782);
	v->a[60078] = 1;
	v->a[60079] = anon_sym_PIPE;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = actions(1055);
	v->a[60081] = 3;
	v->a[60082] = sym_file_descriptor;
	v->a[60083] = ts_builtin_sym_end;
	v->a[60084] = aux_sym_heredoc_redirect_token1;
	v->a[60085] = state(1046);
	v->a[60086] = 3;
	v->a[60087] = sym_file_redirect;
	v->a[60088] = sym_heredoc_redirect;
	v->a[60089] = aux_sym_redirected_statement_repeat1;
	v->a[60090] = actions(1057);
	v->a[60091] = 13;
	v->a[60092] = anon_sym_SEMI_SEMI;
	v->a[60093] = anon_sym_AMP_AMP;
	v->a[60094] = anon_sym_PIPE_PIPE;
	v->a[60095] = anon_sym_LT;
	v->a[60096] = anon_sym_GT;
	v->a[60097] = anon_sym_GT_GT;
	v->a[60098] = anon_sym_LT_AMP;
	v->a[60099] = anon_sym_GT_AMP;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
