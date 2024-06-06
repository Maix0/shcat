/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1008.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5040(t_small_parse_table_array *v)
{
	v->a[100800] = anon_sym_PIPE_PIPE;
	v->a[100801] = actions(5678);
	v->a[100802] = 2;
	v->a[100803] = anon_sym_LT_AMP_DASH;
	v->a[100804] = anon_sym_GT_AMP_DASH;
	v->a[100805] = actions(2745);
	v->a[100806] = 3;
	v->a[100807] = anon_sym_SEMI_SEMI;
	v->a[100808] = anon_sym_AMP;
	v->a[100809] = anon_sym_SEMI;
	v->a[100810] = state(2109);
	v->a[100811] = 3;
	v->a[100812] = sym_file_redirect;
	v->a[100813] = sym_heredoc_redirect;
	v->a[100814] = aux_sym_redirected_statement_repeat1;
	v->a[100815] = actions(5676);
	v->a[100816] = 8;
	v->a[100817] = anon_sym_LT;
	v->a[100818] = anon_sym_GT;
	v->a[100819] = anon_sym_GT_GT;
	small_parse_table_5041(v);
}

void	small_parse_table_5041(t_small_parse_table_array *v)
{
	v->a[100820] = anon_sym_AMP_GT;
	v->a[100821] = anon_sym_AMP_GT_GT;
	v->a[100822] = anon_sym_LT_AMP;
	v->a[100823] = anon_sym_GT_AMP;
	v->a[100824] = anon_sym_GT_PIPE;
	v->a[100825] = 5;
	v->a[100826] = actions(3);
	v->a[100827] = 1;
	v->a[100828] = sym_comment;
	v->a[100829] = actions(5753);
	v->a[100830] = 1;
	v->a[100831] = sym__special_character;
	v->a[100832] = state(2084);
	v->a[100833] = 1;
	v->a[100834] = aux_sym__literal_repeat1;
	v->a[100835] = actions(3543);
	v->a[100836] = 2;
	v->a[100837] = sym_file_descriptor;
	v->a[100838] = aux_sym_heredoc_redirect_token1;
	v->a[100839] = actions(3541);
	small_parse_table_5042(v);
}

void	small_parse_table_5042(t_small_parse_table_array *v)
{
	v->a[100840] = 21;
	v->a[100841] = anon_sym_PIPE;
	v->a[100842] = anon_sym_SEMI_SEMI;
	v->a[100843] = anon_sym_SEMI_AMP;
	v->a[100844] = anon_sym_SEMI_SEMI_AMP;
	v->a[100845] = anon_sym_PIPE_AMP;
	v->a[100846] = anon_sym_AMP_AMP;
	v->a[100847] = anon_sym_PIPE_PIPE;
	v->a[100848] = anon_sym_LT;
	v->a[100849] = anon_sym_GT;
	v->a[100850] = anon_sym_GT_GT;
	v->a[100851] = anon_sym_AMP_GT;
	v->a[100852] = anon_sym_AMP_GT_GT;
	v->a[100853] = anon_sym_LT_AMP;
	v->a[100854] = anon_sym_GT_AMP;
	v->a[100855] = anon_sym_GT_PIPE;
	v->a[100856] = anon_sym_LT_AMP_DASH;
	v->a[100857] = anon_sym_GT_AMP_DASH;
	v->a[100858] = anon_sym_LT_LT;
	v->a[100859] = anon_sym_LT_LT_DASH;
	small_parse_table_5043(v);
}

void	small_parse_table_5043(t_small_parse_table_array *v)
{
	v->a[100860] = anon_sym_AMP;
	v->a[100861] = anon_sym_SEMI;
	v->a[100862] = 3;
	v->a[100863] = actions(3);
	v->a[100864] = 1;
	v->a[100865] = sym_comment;
	v->a[100866] = actions(2664);
	v->a[100867] = 3;
	v->a[100868] = sym_file_descriptor;
	v->a[100869] = sym_variable_name;
	v->a[100870] = aux_sym_heredoc_redirect_token1;
	v->a[100871] = actions(2662);
	v->a[100872] = 22;
	v->a[100873] = anon_sym_PIPE;
	v->a[100874] = anon_sym_SEMI_SEMI;
	v->a[100875] = anon_sym_SEMI_AMP;
	v->a[100876] = anon_sym_SEMI_SEMI_AMP;
	v->a[100877] = anon_sym_PIPE_AMP;
	v->a[100878] = anon_sym_AMP_AMP;
	v->a[100879] = anon_sym_PIPE_PIPE;
	small_parse_table_5044(v);
}

void	small_parse_table_5044(t_small_parse_table_array *v)
{
	v->a[100880] = anon_sym_LT;
	v->a[100881] = anon_sym_GT;
	v->a[100882] = anon_sym_GT_GT;
	v->a[100883] = anon_sym_AMP_GT;
	v->a[100884] = anon_sym_AMP_GT_GT;
	v->a[100885] = anon_sym_LT_AMP;
	v->a[100886] = anon_sym_GT_AMP;
	v->a[100887] = anon_sym_GT_PIPE;
	v->a[100888] = anon_sym_LT_AMP_DASH;
	v->a[100889] = anon_sym_GT_AMP_DASH;
	v->a[100890] = anon_sym_LT_LT;
	v->a[100891] = anon_sym_LT_LT_DASH;
	v->a[100892] = anon_sym_AMP;
	v->a[100893] = sym__special_character;
	v->a[100894] = anon_sym_SEMI;
	v->a[100895] = 19;
	v->a[100896] = actions(3);
	v->a[100897] = 1;
	v->a[100898] = sym_comment;
	v->a[100899] = actions(1011);
	small_parse_table_5045(v);
}

/* EOF small_parse_table_1008.c */
