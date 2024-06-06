/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_555.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2775(t_small_parse_table_array *v)
{
	v->a[55500] = sym_string;
	v->a[55501] = sym_number;
	v->a[55502] = sym_simple_expansion;
	v->a[55503] = sym_expansion;
	v->a[55504] = sym_command_substitution;
	v->a[55505] = actions(1388);
	v->a[55506] = 12;
	v->a[55507] = anon_sym_AMP_AMP;
	v->a[55508] = anon_sym_PIPE_PIPE;
	v->a[55509] = anon_sym_LT;
	v->a[55510] = anon_sym_GT;
	v->a[55511] = anon_sym_GT_GT;
	v->a[55512] = anon_sym_AMP_GT;
	v->a[55513] = anon_sym_AMP_GT_GT;
	v->a[55514] = anon_sym_LT_AMP;
	v->a[55515] = anon_sym_GT_AMP;
	v->a[55516] = anon_sym_GT_PIPE;
	v->a[55517] = anon_sym_LT_AMP_DASH;
	v->a[55518] = anon_sym_GT_AMP_DASH;
	v->a[55519] = 5;
	small_parse_table_2776(v);
}

void	small_parse_table_2776(t_small_parse_table_array *v)
{
	v->a[55520] = actions(3);
	v->a[55521] = 1;
	v->a[55522] = sym_comment;
	v->a[55523] = actions(3810);
	v->a[55524] = 1;
	v->a[55525] = sym__special_character;
	v->a[55526] = state(1198);
	v->a[55527] = 1;
	v->a[55528] = aux_sym__literal_repeat1;
	v->a[55529] = actions(3529);
	v->a[55530] = 5;
	v->a[55531] = sym_file_descriptor;
	v->a[55532] = sym_test_operator;
	v->a[55533] = sym__brace_start;
	v->a[55534] = ts_builtin_sym_end;
	v->a[55535] = aux_sym_heredoc_redirect_token1;
	v->a[55536] = actions(3527);
	v->a[55537] = 31;
	v->a[55538] = anon_sym_PIPE;
	v->a[55539] = anon_sym_SEMI_SEMI;
	small_parse_table_2777(v);
}

void	small_parse_table_2777(t_small_parse_table_array *v)
{
	v->a[55540] = anon_sym_PIPE_AMP;
	v->a[55541] = anon_sym_AMP_AMP;
	v->a[55542] = anon_sym_PIPE_PIPE;
	v->a[55543] = anon_sym_LT;
	v->a[55544] = anon_sym_GT;
	v->a[55545] = anon_sym_GT_GT;
	v->a[55546] = anon_sym_AMP_GT;
	v->a[55547] = anon_sym_AMP_GT_GT;
	v->a[55548] = anon_sym_LT_AMP;
	v->a[55549] = anon_sym_GT_AMP;
	v->a[55550] = anon_sym_GT_PIPE;
	v->a[55551] = anon_sym_LT_AMP_DASH;
	v->a[55552] = anon_sym_GT_AMP_DASH;
	v->a[55553] = anon_sym_LT_LT;
	v->a[55554] = anon_sym_LT_LT_DASH;
	v->a[55555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55556] = anon_sym_AMP;
	v->a[55557] = anon_sym_DOLLAR;
	v->a[55558] = anon_sym_DQUOTE;
	v->a[55559] = sym_raw_string;
	small_parse_table_2778(v);
}

void	small_parse_table_2778(t_small_parse_table_array *v)
{
	v->a[55560] = aux_sym_number_token1;
	v->a[55561] = aux_sym_number_token2;
	v->a[55562] = anon_sym_DOLLAR_LBRACE;
	v->a[55563] = anon_sym_DOLLAR_LPAREN;
	v->a[55564] = anon_sym_BQUOTE;
	v->a[55565] = anon_sym_DOLLAR_BQUOTE;
	v->a[55566] = aux_sym__simple_variable_name_token1;
	v->a[55567] = sym_word;
	v->a[55568] = anon_sym_SEMI;
	v->a[55569] = 3;
	v->a[55570] = actions(3);
	v->a[55571] = 1;
	v->a[55572] = sym_comment;
	v->a[55573] = actions(2664);
	v->a[55574] = 6;
	v->a[55575] = sym_file_descriptor;
	v->a[55576] = sym_variable_name;
	v->a[55577] = sym_test_operator;
	v->a[55578] = sym__brace_start;
	v->a[55579] = ts_builtin_sym_end;
	small_parse_table_2779(v);
}

void	small_parse_table_2779(t_small_parse_table_array *v)
{
	v->a[55580] = aux_sym_heredoc_redirect_token1;
	v->a[55581] = actions(2662);
	v->a[55582] = 32;
	v->a[55583] = anon_sym_PIPE;
	v->a[55584] = anon_sym_SEMI_SEMI;
	v->a[55585] = anon_sym_PIPE_AMP;
	v->a[55586] = anon_sym_AMP_AMP;
	v->a[55587] = anon_sym_PIPE_PIPE;
	v->a[55588] = anon_sym_LT;
	v->a[55589] = anon_sym_GT;
	v->a[55590] = anon_sym_GT_GT;
	v->a[55591] = anon_sym_AMP_GT;
	v->a[55592] = anon_sym_AMP_GT_GT;
	v->a[55593] = anon_sym_LT_AMP;
	v->a[55594] = anon_sym_GT_AMP;
	v->a[55595] = anon_sym_GT_PIPE;
	v->a[55596] = anon_sym_LT_AMP_DASH;
	v->a[55597] = anon_sym_GT_AMP_DASH;
	v->a[55598] = anon_sym_LT_LT;
	v->a[55599] = anon_sym_LT_LT_DASH;
	small_parse_table_2780(v);
}

/* EOF small_parse_table_555.c */
