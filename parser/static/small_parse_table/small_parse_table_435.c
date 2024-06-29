/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_435.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2175(t_small_parse_table_array *v)
{
	v->a[43500] = 1;
	v->a[43501] = sym_variable_name;
	v->a[43502] = actions(1477);
	v->a[43503] = 1;
	v->a[43504] = aux_sym_heredoc_redirect_token1;
	v->a[43505] = actions(804);
	v->a[43506] = 2;
	v->a[43507] = anon_sym_LT_LT;
	v->a[43508] = anon_sym_LT_LT_DASH;
	v->a[43509] = actions(1470);
	v->a[43510] = 2;
	v->a[43511] = anon_sym_AMP_AMP;
	v->a[43512] = anon_sym_PIPE_PIPE;
	v->a[43513] = state(1404);
	v->a[43514] = 2;
	v->a[43515] = sym_variable_assignment;
	v->a[43516] = aux_sym__variable_assignments_repeat1;
	v->a[43517] = state(1397);
	v->a[43518] = 3;
	v->a[43519] = sym_file_redirect;
	small_parse_table_2176(v);
}

void	small_parse_table_2176(t_small_parse_table_array *v)
{
	v->a[43520] = sym_heredoc_redirect;
	v->a[43521] = aux_sym_redirected_statement_repeat1;
	v->a[43522] = actions(762);
	v->a[43523] = 19;
	v->a[43524] = anon_sym_LT;
	v->a[43525] = anon_sym_GT;
	v->a[43526] = anon_sym_GT_GT;
	v->a[43527] = anon_sym_AMP_GT;
	v->a[43528] = anon_sym_AMP_GT_GT;
	v->a[43529] = anon_sym_LT_AMP;
	v->a[43530] = anon_sym_GT_AMP;
	v->a[43531] = anon_sym_GT_PIPE;
	v->a[43532] = anon_sym_LT_AMP_DASH;
	v->a[43533] = anon_sym_GT_AMP_DASH;
	v->a[43534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43535] = anon_sym_DOLLAR;
	v->a[43536] = anon_sym_DQUOTE;
	v->a[43537] = sym_raw_string;
	v->a[43538] = sym_number;
	v->a[43539] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2177(v);
}

void	small_parse_table_2177(t_small_parse_table_array *v)
{
	v->a[43540] = anon_sym_DOLLAR_LPAREN;
	v->a[43541] = anon_sym_BQUOTE;
	v->a[43542] = sym_word;
	v->a[43543] = 3;
	v->a[43544] = actions(3);
	v->a[43545] = 1;
	v->a[43546] = sym_comment;
	v->a[43547] = actions(1114);
	v->a[43548] = 3;
	v->a[43549] = sym_file_descriptor;
	v->a[43550] = sym__concat;
	v->a[43551] = ts_builtin_sym_end;
	v->a[43552] = actions(1112);
	v->a[43553] = 29;
	v->a[43554] = anon_sym_PIPE;
	v->a[43555] = anon_sym_SEMI_SEMI;
	v->a[43556] = anon_sym_AMP_AMP;
	v->a[43557] = anon_sym_PIPE_PIPE;
	v->a[43558] = anon_sym_LT;
	v->a[43559] = anon_sym_GT;
	small_parse_table_2178(v);
}

void	small_parse_table_2178(t_small_parse_table_array *v)
{
	v->a[43560] = anon_sym_GT_GT;
	v->a[43561] = anon_sym_AMP_GT;
	v->a[43562] = anon_sym_AMP_GT_GT;
	v->a[43563] = anon_sym_LT_AMP;
	v->a[43564] = anon_sym_GT_AMP;
	v->a[43565] = anon_sym_GT_PIPE;
	v->a[43566] = anon_sym_LT_AMP_DASH;
	v->a[43567] = anon_sym_GT_AMP_DASH;
	v->a[43568] = anon_sym_LT_LT;
	v->a[43569] = anon_sym_LT_LT_DASH;
	v->a[43570] = aux_sym_heredoc_redirect_token1;
	v->a[43571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43572] = anon_sym_AMP;
	v->a[43573] = aux_sym_concatenation_token1;
	v->a[43574] = anon_sym_DOLLAR;
	v->a[43575] = anon_sym_DQUOTE;
	v->a[43576] = sym_raw_string;
	v->a[43577] = sym_number;
	v->a[43578] = anon_sym_DOLLAR_LBRACE;
	v->a[43579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2179(v);
}

void	small_parse_table_2179(t_small_parse_table_array *v)
{
	v->a[43580] = anon_sym_BQUOTE;
	v->a[43581] = sym_word;
	v->a[43582] = anon_sym_SEMI;
	v->a[43583] = 3;
	v->a[43584] = actions(3);
	v->a[43585] = 1;
	v->a[43586] = sym_comment;
	v->a[43587] = actions(1000);
	v->a[43588] = 2;
	v->a[43589] = sym_file_descriptor;
	v->a[43590] = sym__bare_dollar;
	v->a[43591] = actions(993);
	v->a[43592] = 30;
	v->a[43593] = anon_sym_esac;
	v->a[43594] = anon_sym_LPAREN;
	v->a[43595] = anon_sym_PIPE;
	v->a[43596] = anon_sym_SEMI_SEMI;
	v->a[43597] = anon_sym_AMP_AMP;
	v->a[43598] = anon_sym_PIPE_PIPE;
	v->a[43599] = anon_sym_LT;
	small_parse_table_2180(v);
}

/* EOF small_parse_table_435.c */
