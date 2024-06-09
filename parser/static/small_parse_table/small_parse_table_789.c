/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_789.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3945(t_small_parse_table_array *v)
{
	v->a[78900] = actions(1114);
	v->a[78901] = 7;
	v->a[78902] = anon_sym_PIPE;
	v->a[78903] = anon_sym_LT;
	v->a[78904] = anon_sym_GT;
	v->a[78905] = anon_sym_AMP_GT;
	v->a[78906] = anon_sym_LT_AMP;
	v->a[78907] = anon_sym_GT_AMP;
	v->a[78908] = anon_sym_LT_LT;
	v->a[78909] = actions(1112);
	v->a[78910] = 11;
	v->a[78911] = sym_file_descriptor;
	v->a[78912] = sym__concat;
	v->a[78913] = anon_sym_AMP_AMP;
	v->a[78914] = anon_sym_PIPE_PIPE;
	v->a[78915] = anon_sym_GT_GT;
	v->a[78916] = anon_sym_AMP_GT_GT;
	v->a[78917] = anon_sym_GT_PIPE;
	v->a[78918] = anon_sym_LT_AMP_DASH;
	v->a[78919] = anon_sym_GT_AMP_DASH;
	small_parse_table_3946(v);
}

void	small_parse_table_3946(t_small_parse_table_array *v)
{
	v->a[78920] = anon_sym_LT_LT_DASH;
	v->a[78921] = aux_sym_concatenation_token1;
	v->a[78922] = 9;
	v->a[78923] = actions(1037);
	v->a[78924] = 1;
	v->a[78925] = anon_sym_LT_LT;
	v->a[78926] = actions(1404);
	v->a[78927] = 1;
	v->a[78928] = sym_comment;
	v->a[78929] = actions(2310);
	v->a[78930] = 1;
	v->a[78931] = sym_file_descriptor;
	v->a[78932] = actions(3240);
	v->a[78933] = 1;
	v->a[78934] = anon_sym_LT_LT_DASH;
	v->a[78935] = actions(3234);
	v->a[78936] = 2;
	v->a[78937] = anon_sym_AMP_AMP;
	v->a[78938] = anon_sym_PIPE_PIPE;
	v->a[78939] = actions(3238);
	small_parse_table_3947(v);
}

void	small_parse_table_3947(t_small_parse_table_array *v)
{
	v->a[78940] = 2;
	v->a[78941] = anon_sym_LT_AMP_DASH;
	v->a[78942] = anon_sym_GT_AMP_DASH;
	v->a[78943] = actions(3236);
	v->a[78944] = 3;
	v->a[78945] = anon_sym_GT_GT;
	v->a[78946] = anon_sym_AMP_GT_GT;
	v->a[78947] = anon_sym_GT_PIPE;
	v->a[78948] = state(1035);
	v->a[78949] = 3;
	v->a[78950] = sym_file_redirect;
	v->a[78951] = sym_heredoc_redirect;
	v->a[78952] = aux_sym_redirected_statement_repeat1;
	v->a[78953] = actions(2304);
	v->a[78954] = 5;
	v->a[78955] = anon_sym_LT;
	v->a[78956] = anon_sym_GT;
	v->a[78957] = anon_sym_AMP_GT;
	v->a[78958] = anon_sym_LT_AMP;
	v->a[78959] = anon_sym_GT_AMP;
	small_parse_table_3948(v);
}

void	small_parse_table_3948(t_small_parse_table_array *v)
{
	v->a[78960] = 12;
	v->a[78961] = actions(3);
	v->a[78962] = 1;
	v->a[78963] = sym_comment;
	v->a[78964] = actions(383);
	v->a[78965] = 1;
	v->a[78966] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78967] = actions(387);
	v->a[78968] = 1;
	v->a[78969] = anon_sym_DQUOTE;
	v->a[78970] = actions(391);
	v->a[78971] = 1;
	v->a[78972] = aux_sym_number_token1;
	v->a[78973] = actions(393);
	v->a[78974] = 1;
	v->a[78975] = aux_sym_number_token2;
	v->a[78976] = actions(395);
	v->a[78977] = 1;
	v->a[78978] = anon_sym_DOLLAR_LBRACE;
	v->a[78979] = actions(397);
	small_parse_table_3949(v);
}

void	small_parse_table_3949(t_small_parse_table_array *v)
{
	v->a[78980] = 1;
	v->a[78981] = anon_sym_DOLLAR_LPAREN;
	v->a[78982] = actions(399);
	v->a[78983] = 1;
	v->a[78984] = anon_sym_BQUOTE;
	v->a[78985] = actions(3069);
	v->a[78986] = 1;
	v->a[78987] = sym__bare_dollar;
	v->a[78988] = actions(3242);
	v->a[78989] = 1;
	v->a[78990] = anon_sym_DOLLAR;
	v->a[78991] = actions(3067);
	v->a[78992] = 3;
	v->a[78993] = sym_raw_string;
	v->a[78994] = sym__comment_word;
	v->a[78995] = sym_word;
	v->a[78996] = state(804);
	v->a[78997] = 6;
	v->a[78998] = sym_arithmetic_expansion;
	v->a[78999] = sym_string;
	small_parse_table_3950(v);
}

/* EOF small_parse_table_789.c */
