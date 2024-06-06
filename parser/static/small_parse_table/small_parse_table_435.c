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
	v->a[43500] = anon_sym_LT;
	v->a[43501] = anon_sym_GT;
	v->a[43502] = anon_sym_GT_GT;
	v->a[43503] = anon_sym_AMP_GT;
	v->a[43504] = anon_sym_AMP_GT_GT;
	v->a[43505] = anon_sym_LT_AMP;
	v->a[43506] = anon_sym_GT_AMP;
	v->a[43507] = anon_sym_GT_PIPE;
	v->a[43508] = anon_sym_LT_AMP_DASH;
	v->a[43509] = anon_sym_GT_AMP_DASH;
	v->a[43510] = anon_sym_LT_LT;
	v->a[43511] = anon_sym_LT_LT_DASH;
	v->a[43512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43513] = anon_sym_AMP;
	v->a[43514] = anon_sym_DOLLAR;
	v->a[43515] = anon_sym_DQUOTE;
	v->a[43516] = sym_raw_string;
	v->a[43517] = aux_sym_number_token1;
	v->a[43518] = aux_sym_number_token2;
	v->a[43519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2176(v);
}

void	small_parse_table_2176(t_small_parse_table_array *v)
{
	v->a[43520] = anon_sym_DOLLAR_LPAREN;
	v->a[43521] = anon_sym_BQUOTE;
	v->a[43522] = anon_sym_DOLLAR_BQUOTE;
	v->a[43523] = sym_word;
	v->a[43524] = anon_sym_SEMI;
	v->a[43525] = 3;
	v->a[43526] = actions(3);
	v->a[43527] = 1;
	v->a[43528] = sym_comment;
	v->a[43529] = actions(3034);
	v->a[43530] = 5;
	v->a[43531] = sym_file_descriptor;
	v->a[43532] = sym__concat;
	v->a[43533] = sym_test_operator;
	v->a[43534] = sym__brace_start;
	v->a[43535] = aux_sym_heredoc_redirect_token1;
	v->a[43536] = actions(3032);
	v->a[43537] = 35;
	v->a[43538] = anon_sym_PIPE;
	v->a[43539] = anon_sym_SEMI_SEMI;
	small_parse_table_2177(v);
}

void	small_parse_table_2177(t_small_parse_table_array *v)
{
	v->a[43540] = anon_sym_SEMI_AMP;
	v->a[43541] = anon_sym_SEMI_SEMI_AMP;
	v->a[43542] = anon_sym_PIPE_AMP;
	v->a[43543] = anon_sym_AMP_AMP;
	v->a[43544] = anon_sym_PIPE_PIPE;
	v->a[43545] = anon_sym_LT;
	v->a[43546] = anon_sym_GT;
	v->a[43547] = anon_sym_GT_GT;
	v->a[43548] = anon_sym_AMP_GT;
	v->a[43549] = anon_sym_AMP_GT_GT;
	v->a[43550] = anon_sym_LT_AMP;
	v->a[43551] = anon_sym_GT_AMP;
	v->a[43552] = anon_sym_GT_PIPE;
	v->a[43553] = anon_sym_LT_AMP_DASH;
	v->a[43554] = anon_sym_GT_AMP_DASH;
	v->a[43555] = anon_sym_LT_LT;
	v->a[43556] = anon_sym_LT_LT_DASH;
	v->a[43557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43558] = anon_sym_AMP;
	v->a[43559] = aux_sym_concatenation_token1;
	small_parse_table_2178(v);
}

void	small_parse_table_2178(t_small_parse_table_array *v)
{
	v->a[43560] = anon_sym_DOLLAR;
	v->a[43561] = sym__special_character;
	v->a[43562] = anon_sym_DQUOTE;
	v->a[43563] = sym_raw_string;
	v->a[43564] = aux_sym_number_token1;
	v->a[43565] = aux_sym_number_token2;
	v->a[43566] = anon_sym_DOLLAR_LBRACE;
	v->a[43567] = anon_sym_DOLLAR_LPAREN;
	v->a[43568] = anon_sym_BQUOTE;
	v->a[43569] = anon_sym_DOLLAR_BQUOTE;
	v->a[43570] = aux_sym__simple_variable_name_token1;
	v->a[43571] = sym_word;
	v->a[43572] = anon_sym_SEMI;
	v->a[43573] = 5;
	v->a[43574] = actions(3);
	v->a[43575] = 1;
	v->a[43576] = sym_comment;
	v->a[43577] = actions(3604);
	v->a[43578] = 1;
	v->a[43579] = sym__special_character;
	small_parse_table_2179(v);
}

void	small_parse_table_2179(t_small_parse_table_array *v)
{
	v->a[43580] = state(971);
	v->a[43581] = 1;
	v->a[43582] = aux_sym__literal_repeat1;
	v->a[43583] = actions(3197);
	v->a[43584] = 5;
	v->a[43585] = sym_file_descriptor;
	v->a[43586] = sym_variable_name;
	v->a[43587] = sym_test_operator;
	v->a[43588] = sym__brace_start;
	v->a[43589] = aux_sym_heredoc_redirect_token1;
	v->a[43590] = actions(3195);
	v->a[43591] = 33;
	v->a[43592] = anon_sym_esac;
	v->a[43593] = anon_sym_PIPE;
	v->a[43594] = anon_sym_SEMI_SEMI;
	v->a[43595] = anon_sym_SEMI_AMP;
	v->a[43596] = anon_sym_SEMI_SEMI_AMP;
	v->a[43597] = anon_sym_PIPE_AMP;
	v->a[43598] = anon_sym_AMP_AMP;
	v->a[43599] = anon_sym_PIPE_PIPE;
	small_parse_table_2180(v);
}

/* EOF small_parse_table_435.c */
