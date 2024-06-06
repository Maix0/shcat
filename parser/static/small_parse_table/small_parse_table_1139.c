/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1139.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5695(t_small_parse_table_array *v)
{
	v->a[113900] = aux_sym_heredoc_redirect_token1;
	v->a[113901] = actions(3639);
	v->a[113902] = 21;
	v->a[113903] = anon_sym_PIPE;
	v->a[113904] = anon_sym_SEMI_SEMI;
	v->a[113905] = anon_sym_SEMI_AMP;
	v->a[113906] = anon_sym_SEMI_SEMI_AMP;
	v->a[113907] = anon_sym_PIPE_AMP;
	v->a[113908] = anon_sym_AMP_AMP;
	v->a[113909] = anon_sym_PIPE_PIPE;
	v->a[113910] = anon_sym_LT;
	v->a[113911] = anon_sym_GT;
	v->a[113912] = anon_sym_GT_GT;
	v->a[113913] = anon_sym_AMP_GT;
	v->a[113914] = anon_sym_AMP_GT_GT;
	v->a[113915] = anon_sym_LT_AMP;
	v->a[113916] = anon_sym_GT_AMP;
	v->a[113917] = anon_sym_GT_PIPE;
	v->a[113918] = anon_sym_LT_AMP_DASH;
	v->a[113919] = anon_sym_GT_AMP_DASH;
	small_parse_table_5696(v);
}

void	small_parse_table_5696(t_small_parse_table_array *v)
{
	v->a[113920] = anon_sym_LT_LT;
	v->a[113921] = anon_sym_LT_LT_DASH;
	v->a[113922] = anon_sym_AMP;
	v->a[113923] = anon_sym_SEMI;
	v->a[113924] = 3;
	v->a[113925] = actions(3);
	v->a[113926] = 1;
	v->a[113927] = sym_comment;
	v->a[113928] = actions(5977);
	v->a[113929] = 2;
	v->a[113930] = sym_file_descriptor;
	v->a[113931] = aux_sym_heredoc_redirect_token1;
	v->a[113932] = actions(5979);
	v->a[113933] = 21;
	v->a[113934] = anon_sym_PIPE;
	v->a[113935] = anon_sym_SEMI_SEMI;
	v->a[113936] = anon_sym_SEMI_AMP;
	v->a[113937] = anon_sym_SEMI_SEMI_AMP;
	v->a[113938] = anon_sym_PIPE_AMP;
	v->a[113939] = anon_sym_AMP_AMP;
	small_parse_table_5697(v);
}

void	small_parse_table_5697(t_small_parse_table_array *v)
{
	v->a[113940] = anon_sym_PIPE_PIPE;
	v->a[113941] = anon_sym_LT;
	v->a[113942] = anon_sym_GT;
	v->a[113943] = anon_sym_GT_GT;
	v->a[113944] = anon_sym_AMP_GT;
	v->a[113945] = anon_sym_AMP_GT_GT;
	v->a[113946] = anon_sym_LT_AMP;
	v->a[113947] = anon_sym_GT_AMP;
	v->a[113948] = anon_sym_GT_PIPE;
	v->a[113949] = anon_sym_LT_AMP_DASH;
	v->a[113950] = anon_sym_GT_AMP_DASH;
	v->a[113951] = anon_sym_LT_LT;
	v->a[113952] = anon_sym_LT_LT_DASH;
	v->a[113953] = anon_sym_AMP;
	v->a[113954] = anon_sym_SEMI;
	v->a[113955] = 16;
	v->a[113956] = actions(3);
	v->a[113957] = 1;
	v->a[113958] = sym_comment;
	v->a[113959] = actions(1073);
	small_parse_table_5698(v);
}

void	small_parse_table_5698(t_small_parse_table_array *v)
{
	v->a[113960] = 1;
	v->a[113961] = anon_sym_DOLLAR;
	v->a[113962] = actions(1079);
	v->a[113963] = 1;
	v->a[113964] = aux_sym_number_token1;
	v->a[113965] = actions(1081);
	v->a[113966] = 1;
	v->a[113967] = aux_sym_number_token2;
	v->a[113968] = actions(1085);
	v->a[113969] = 1;
	v->a[113970] = anon_sym_DOLLAR_LPAREN;
	v->a[113971] = actions(1097);
	v->a[113972] = 1;
	v->a[113973] = sym__brace_start;
	v->a[113974] = actions(5897);
	v->a[113975] = 1;
	v->a[113976] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113977] = actions(5901);
	v->a[113978] = 1;
	v->a[113979] = anon_sym_DQUOTE;
	small_parse_table_5699(v);
}

void	small_parse_table_5699(t_small_parse_table_array *v)
{
	v->a[113980] = actions(5905);
	v->a[113981] = 1;
	v->a[113982] = anon_sym_DOLLAR_LBRACE;
	v->a[113983] = actions(5907);
	v->a[113984] = 1;
	v->a[113985] = anon_sym_BQUOTE;
	v->a[113986] = actions(5909);
	v->a[113987] = 1;
	v->a[113988] = anon_sym_DOLLAR_BQUOTE;
	v->a[113989] = actions(6320);
	v->a[113990] = 1;
	v->a[113991] = sym_word;
	v->a[113992] = actions(6324);
	v->a[113993] = 1;
	v->a[113994] = sym__special_character;
	v->a[113995] = actions(6328);
	v->a[113996] = 1;
	v->a[113997] = sym__comment_word;
	v->a[113998] = actions(6326);
	v->a[113999] = 3;
	small_parse_table_5700(v);
}

/* EOF small_parse_table_1139.c */
