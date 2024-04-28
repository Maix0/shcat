/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2515.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12575(t_small_parse_table_array *v)
{
	v->a[251500] = 19;
	v->a[251501] = anon_sym_SEMI;
	v->a[251502] = anon_sym_PIPE_PIPE;
	v->a[251503] = anon_sym_AMP_AMP;
	v->a[251504] = anon_sym_PIPE;
	v->a[251505] = anon_sym_AMP;
	v->a[251506] = anon_sym_LT;
	v->a[251507] = anon_sym_GT;
	v->a[251508] = anon_sym_LT_LT;
	v->a[251509] = anon_sym_GT_GT;
	v->a[251510] = anon_sym_SEMI_SEMI;
	v->a[251511] = anon_sym_PIPE_AMP;
	v->a[251512] = anon_sym_AMP_GT;
	v->a[251513] = anon_sym_AMP_GT_GT;
	v->a[251514] = anon_sym_LT_AMP;
	v->a[251515] = anon_sym_GT_AMP;
	v->a[251516] = anon_sym_GT_PIPE;
	v->a[251517] = anon_sym_LT_AMP_DASH;
	v->a[251518] = anon_sym_GT_AMP_DASH;
	v->a[251519] = anon_sym_LT_LT_DASH;
	small_parse_table_12576(v);
}

void	small_parse_table_12576(t_small_parse_table_array *v)
{
	v->a[251520] = 6;
	v->a[251521] = actions(3);
	v->a[251522] = 1;
	v->a[251523] = sym_comment;
	v->a[251524] = actions(11643);
	v->a[251525] = 1;
	v->a[251526] = aux_sym_concatenation_token1;
	v->a[251527] = actions(11646);
	v->a[251528] = 1;
	v->a[251529] = sym__concat;
	v->a[251530] = state(4520);
	v->a[251531] = 1;
	v->a[251532] = aux_sym_concatenation_repeat1;
	v->a[251533] = actions(1253);
	v->a[251534] = 3;
	v->a[251535] = sym_test_operator;
	v->a[251536] = sym__brace_start;
	v->a[251537] = aux_sym_heredoc_redirect_token1;
	v->a[251538] = actions(1251);
	v->a[251539] = 20;
	small_parse_table_12577(v);
}

void	small_parse_table_12577(t_small_parse_table_array *v)
{
	v->a[251540] = anon_sym_LPAREN_LPAREN;
	v->a[251541] = anon_sym_SEMI;
	v->a[251542] = anon_sym_AMP;
	v->a[251543] = anon_sym_SEMI_SEMI;
	v->a[251544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[251545] = anon_sym_DOLLAR_LBRACK;
	v->a[251546] = anon_sym_DOLLAR;
	v->a[251547] = sym__special_character;
	v->a[251548] = anon_sym_DQUOTE;
	v->a[251549] = sym_raw_string;
	v->a[251550] = sym_ansi_c_string;
	v->a[251551] = aux_sym_number_token1;
	v->a[251552] = aux_sym_number_token2;
	v->a[251553] = anon_sym_DOLLAR_LBRACE;
	v->a[251554] = anon_sym_DOLLAR_LPAREN;
	v->a[251555] = anon_sym_BQUOTE;
	v->a[251556] = anon_sym_DOLLAR_BQUOTE;
	v->a[251557] = anon_sym_LT_LPAREN;
	v->a[251558] = anon_sym_GT_LPAREN;
	v->a[251559] = sym_word;
	small_parse_table_12578(v);
}

void	small_parse_table_12578(t_small_parse_table_array *v)
{
	v->a[251560] = 5;
	v->a[251561] = actions(3);
	v->a[251562] = 1;
	v->a[251563] = sym_comment;
	v->a[251564] = actions(11566);
	v->a[251565] = 1;
	v->a[251566] = sym__special_character;
	v->a[251567] = state(4485);
	v->a[251568] = 1;
	v->a[251569] = aux_sym__literal_repeat1;
	v->a[251570] = actions(5723);
	v->a[251571] = 3;
	v->a[251572] = sym_file_descriptor;
	v->a[251573] = ts_builtin_sym_end;
	v->a[251574] = aux_sym_heredoc_redirect_token1;
	v->a[251575] = actions(5721);
	v->a[251576] = 21;
	v->a[251577] = anon_sym_SEMI;
	v->a[251578] = anon_sym_PIPE_PIPE;
	v->a[251579] = anon_sym_AMP_AMP;
	small_parse_table_12579(v);
}

void	small_parse_table_12579(t_small_parse_table_array *v)
{
	v->a[251580] = anon_sym_PIPE;
	v->a[251581] = anon_sym_AMP;
	v->a[251582] = anon_sym_LT;
	v->a[251583] = anon_sym_GT;
	v->a[251584] = anon_sym_LT_LT;
	v->a[251585] = anon_sym_GT_GT;
	v->a[251586] = anon_sym_RPAREN;
	v->a[251587] = anon_sym_SEMI_SEMI;
	v->a[251588] = anon_sym_PIPE_AMP;
	v->a[251589] = anon_sym_AMP_GT;
	v->a[251590] = anon_sym_AMP_GT_GT;
	v->a[251591] = anon_sym_LT_AMP;
	v->a[251592] = anon_sym_GT_AMP;
	v->a[251593] = anon_sym_GT_PIPE;
	v->a[251594] = anon_sym_LT_AMP_DASH;
	v->a[251595] = anon_sym_GT_AMP_DASH;
	v->a[251596] = anon_sym_LT_LT_DASH;
	v->a[251597] = anon_sym_BQUOTE;
	v->a[251598] = 6;
	v->a[251599] = actions(3);
	small_parse_table_12580(v);
}

/* EOF small_parse_table_2515.c */
